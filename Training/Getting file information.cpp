#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <time.h>
#include <sys/stat.h>

void main()
{
	const char * fname = "Running.cpp";	// Name of the file you are finding the information about.
	struct stat fstat;

	if (stat(fname, &fstat) == 0)
	{
		fprintf(stdout, "Name: %s, UID: %u, GID: %u, Size: %llu\n",
			fname, fstat.st_uid, fstat.st_gid, fstat.st_size);

		// File modifaction time is in seconds since midnight 1970-01-01 UTC
		const static int bufSize = 128;
		char buf[bufSize];
		//struct tm mtime = *gmtime(&fstat.st_mtimespec.tv_sec);
		struct tm mtime = *gmtime(&fstat.st_mtime);
		strftime(buf, bufSize, "%Y-%m-%d %H:%M:%S %Z", &mtime);
		printf("Last modified: %s\n", buf);

	}
	else
	{
		perror("Couldn't stat file");
	}

	while (true) {};
}





/*
	- The Stat function returns information about a file.
	- The "stat()" will return either a 1 or 0 depending on if it finds the file, with the arguments being: 
	  (char * filename, struct stat * info)
	- "struct stat" is a variable, where the struct stat is the normalised/standarised structure that has information about files.
	- At a minimum the struct stat is supposed to have the following fields: 
		- "st_size"	 : Size of files in bytes, 
		- "st_ino"	 : File inode number, 
		- "st_mode"  : File mode, 
		- "st_nlink" : Number of hard links, 
		- "st_uid"	 : Owner user ID, 
		- "st_gid"	 : Owner group ID, 
		- "st_ctime" : File creation time, 
		- "st_mtime" : File modification time, 
		- "st_atime" : File access time.
		- Note that the last 3 in this list are sometime not standardised depending on the system.
		- Also note that some of them may not be very useful as they were defined when C was used for unix operating system, so are not
		  used for more modern operating system such as the file inode number and file mode.
*/