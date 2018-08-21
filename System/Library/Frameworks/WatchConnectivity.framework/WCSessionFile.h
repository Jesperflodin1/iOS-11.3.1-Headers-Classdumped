/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSDate, WCUserInfo, NSString, NSURL, NSData;

@interface WCSessionFile : NSObject <NSSecureCoding> {

	NSDictionary* _metadata;
	NSDate* _creationDate;
	WCUserInfo* _userInfoStorage;
	NSString* _relativePath;
	NSString* _fileIdentifier;
	NSURL* _fileURL;

}

@property (nonatomic,copy) NSDictionary * metadata;                     //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                     //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) WCUserInfo * userInfoStorage;              //@synthesize userInfoStorage=_userInfoStorage - In the implementation block
@property (nonatomic,copy) NSString * relativePath;                     //@synthesize relativePath=_relativePath - In the implementation block
@property (copy) NSString * fileIdentifier;                             //@synthesize fileIdentifier=_fileIdentifier - In the implementation block
@property (copy,readonly) NSData * userInfoData; 
@property (nonatomic,retain) NSURL * fileURL;                           //@synthesize fileURL=_fileURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setFileIdentifier:(NSString *)arg1 ;
-(NSString *)fileIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(NSData *)userInfoData;
-(NSURL *)fileURL;
-(NSDictionary *)metadata;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setRelativePath:(NSString *)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(BOOL)updateUserInfoData:(id)arg1 error:(id*)arg2 ;
-(WCUserInfo *)userInfoStorage;
-(BOOL)updateUserInfo:(id)arg1 error:(id*)arg2 ;
-(void)setUserInfoStorage:(WCUserInfo *)arg1 ;
-(BOOL)verifyMetadata;
-(id)initWithIdentifier:(id)arg1 fileURL:(id)arg2 relativePath:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 relativePath:(id)arg2 ;
-(NSString *)relativePath;
@end

