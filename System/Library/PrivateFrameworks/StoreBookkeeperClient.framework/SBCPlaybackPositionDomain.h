/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreBookkeeperClient/StoreBookkeeperClient-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SBCPlaybackPositionDomain : NSObject <NSCopying, NSSecureCoding> {

	BOOL _supportsSyncProtocol;
	NSString* _domainIdentifier;
	NSString* _ubiquitousDatabasePath;
	NSString* _foreignDatabasePath;

}

@property (nonatomic,retain) NSString * ubiquitousDatabasePath;              //@synthesize ubiquitousDatabasePath=_ubiquitousDatabasePath - In the implementation block
@property (assign,nonatomic) BOOL supportsSyncProtocol;                      //@synthesize supportsSyncProtocol=_supportsSyncProtocol - In the implementation block
@property (nonatomic,readonly) NSString * domainIdentifier;                  //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * foreignDatabasePath;               //@synthesize foreignDatabasePath=_foreignDatabasePath - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)domainForSyncingMusicLibraryWithLibraryPath:(id)arg1 ;
+(id)allSyncingDomains;
+(id)domainForExtrasValues;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domainIdentifier;
-(BOOL)supportsSyncProtocol;
-(id)initWithDomainIdentifier:(id)arg1 foreignDatabasePath:(id)arg2 ;
-(void)setSupportsSyncProtocol:(BOOL)arg1 ;
-(void)setUbiquitousDatabasePath:(NSString *)arg1 ;
-(NSString *)ubiquitousDatabasePath;
-(NSString *)foreignDatabasePath;
@end
