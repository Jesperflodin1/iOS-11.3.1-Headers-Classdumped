/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticExtensionsDaemon/DEDAttachmentItem.h>

@class NSString;

@interface DEDSeedingUploadItem : DEDAttachmentItem {

	BOOL _completed;
	NSString* _extensionID;
	unsigned long long _bytesUploaded;

}

@property (retain) NSString * extensionID;                        //@synthesize extensionID=_extensionID - In the implementation block
@property (assign) unsigned long long bytesUploaded;              //@synthesize bytesUploaded=_bytesUploaded - In the implementation block
@property (assign) BOOL completed;                                //@synthesize completed=_completed - In the implementation block
+(id)itemAtPath:(id)arg1 enclosedFilename:(id)arg2 extensionID:(id)arg3 ;
-(BOOL)completed;
-(NSString *)extensionID;
-(void)setExtensionID:(NSString *)arg1 ;
-(id)description;
-(void)setCompleted:(BOOL)arg1 ;
-(id)publicDescription;
-(unsigned long long)bytesUploaded;
-(void)setBytesUploaded:(unsigned long long)arg1 ;
-(id)promiseFilename;
@end

