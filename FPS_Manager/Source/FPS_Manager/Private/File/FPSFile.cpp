// Fill out your copyright notice in the Description page of Project Settings.
#include "PlatformFilemanager.h"
#include "FPSFile.h"

FPSFile::FPSFile()
{
}

FPSFile::~FPSFile()
{
}

bool FPSFile::VerifyDir(const FString& Dir)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	return PlatformFile.DirectoryExists(*Dir);
}

bool FPSFile::CreateDir(const FString& Dir)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	return PlatformFile.CreateDirectory(*Dir);
}

bool FPSFile::DeleteDir(const FString& Dir)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	return PlatformFile.DeleteDirectory(*Dir);
}

bool FPSFile::VerifyFile(const FString& AbsoluteFilePath)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	return PlatformFile.FileExists(*AbsoluteFilePath);
}

int64 FPSFile::GetFileSize(const FString& AbsoluteFilePath)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	return PlatformFile.FileSize(*AbsoluteFilePath);
}

bool FPSFile::MoveFile(const FString& DestFilePath, const FString& SourceFilePath)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	return PlatformFile.MoveFile(*DestFilePath, *SourceFilePath);
}

bool FPSFile::DeleteFile(const FString& Dir)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	return PlatformFile.DeleteFile(*Dir);
}