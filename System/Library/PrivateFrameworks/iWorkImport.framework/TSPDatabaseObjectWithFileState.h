/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPDatabaseObject.h>

@class NSString, NSURL;

@interface TSPDatabaseObjectWithFileState : TSPDatabaseObject {

	NSString* _fileState;
	NSURL* _packageURL;

}
-(BOOL)hasDataState;
-(long long)dataState;
-(id)initWithIdentifier:(long long)arg1 classType:(int)arg2 fileState:(id)arg3 packageURL:(id)arg4 ;
-(BOOL)hasFileState;
-(id)fileState;
-(id)fileURL;
@end

