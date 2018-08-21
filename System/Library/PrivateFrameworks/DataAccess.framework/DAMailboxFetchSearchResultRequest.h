/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DAMailboxFetchSearchResultRequest : NSObject {

	int _bodyFormat;
	int _maxSize;
	NSString* _longID;
	NSString* _folderID;
	NSString* _serverID;

}

@property (nonatomic,copy) NSString * longID;                //@synthesize longID=_longID - In the implementation block
@property (nonatomic,copy) NSString * folderID;              //@synthesize folderID=_folderID - In the implementation block
@property (nonatomic,copy) NSString * serverID;              //@synthesize serverID=_serverID - In the implementation block
@property (assign,nonatomic) int bodyFormat;                 //@synthesize bodyFormat=_bodyFormat - In the implementation block
@property (assign,nonatomic) int maxSize;                    //@synthesize maxSize=_maxSize - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)maxSize;
-(void)setMaxSize:(int)arg1 ;
-(void)setBodyFormat:(int)arg1 ;
-(id)initRequestForBodyFormat:(int)arg1 withLongID:(id)arg2 withBodySizeLimit:(int)arg3 ;
-(void)setFolderID:(NSString *)arg1 ;
-(int)bodyFormat;
-(id)initRequestForBodyFormat:(int)arg1 withFolderID:(id)arg2 withServerID:(id)arg3 withLongID:(id)arg4 withBodySizeLimit:(int)arg5 ;
-(NSString *)longID;
-(void)setLongID:(NSString *)arg1 ;
-(NSString *)serverID;
-(void)setServerID:(NSString *)arg1 ;
-(NSString *)folderID;
@end

