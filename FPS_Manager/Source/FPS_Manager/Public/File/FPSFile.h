// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */


class FPS_MANAGER_API FPSFile
{
public:
	FPSFile();
	~FPSFile();

public:
	/*
	* Verify if Dir Exists
	*
	* @param AbsoluteFilePath*/
	static bool VerifyDir(const FString& Dir);

	/*
	* Creat file folder
	*
	* @param AbsoluteFilePaht*/
	static bool CreateDir(const FString& Dir);

	/*
	* Delete file folder
	*
	* @param AbsoluteFilePath*/
	static bool DeleteDir(const FString& Dir);

	/*
	* Verify If File Exists
	*
	* @param AbsoluteFilePath*/
	static bool VerifyFile(const FString& AbsoluteFilePath);

	/*
	* @param AbsoluteFilePath*/
	static int64 GetFileSize(const FString& AbsoluteFilePath);

	/*
	* @param DestFilePath
	* @param SourceFilePath*/
	static bool MoveFile(const FString& DestFilePath, const FString& SourceFilePath);

	/*
	* Delete File
	*
	* @param AbsoluteFilePath*/
	static bool DeleteFile(const FString& Dir);

};
