/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSFileManager;

@interface HDDemoData : NSObject {

	NSString* _demoDataPath;
	NSFileManager* _fileManager;

}
+(BOOL)shouldUseDemoDataDirectory;
+(BOOL)willBeGeneratingDemoData;
+(id)demoDataDirectory;
-(id)_directoryPath;
-(id)initWithProfileType:(long long)arg1 ;
-(BOOL)_resetDemoDataDB;
@end

