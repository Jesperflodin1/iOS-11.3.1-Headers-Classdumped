/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/StorageSettings.bundle/StorageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface STStorageSpace : NSObject {

	BOOL _isLowSpace;
	BOOL _isVeryLowSpace;
	long long _totalBytes;
	long long _freeBytes;
	long long _purgeableBytes;
	long long _usedBytes;
	long long _availableBytes;

}

@property (readonly) long long totalBytes;                  //@synthesize totalBytes=_totalBytes - In the implementation block
@property (readonly) long long freeBytes;                   //@synthesize freeBytes=_freeBytes - In the implementation block
@property (readonly) long long purgeableBytes;              //@synthesize purgeableBytes=_purgeableBytes - In the implementation block
@property (readonly) long long usedBytes;                   //@synthesize usedBytes=_usedBytes - In the implementation block
@property (readonly) long long availableBytes;              //@synthesize availableBytes=_availableBytes - In the implementation block
@property (readonly) BOOL isLowSpace;                       //@synthesize isLowSpace=_isLowSpace - In the implementation block
@property (readonly) BOOL isVeryLowSpace;                   //@synthesize isVeryLowSpace=_isVeryLowSpace - In the implementation block
-(long long)purgeableBytes;
-(BOOL)isVeryLowSpace;
-(id)initWithTotal:(long long)arg1 free:(long long)arg2 purgeable:(long long)arg3 ;
-(BOOL)isLowSpace;
-(long long)usedBytes;
-(long long)availableBytes;
-(long long)totalBytes;
-(long long)freeBytes;
@end

