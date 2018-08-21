/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface ADIDRecord : NSObject {

	BOOL _dirty;
	NSString* _ID;
	NSData* _encryptedID;

}

@property (nonatomic,retain) NSData * encryptedID;              //@synthesize encryptedID=_encryptedID - In the implementation block
@property (nonatomic,retain) NSString * ID;                     //@synthesize ID=_ID - In the implementation block
@property (assign,nonatomic) BOOL dirty;                        //@synthesize dirty=_dirty - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)dirty;
-(id)initWithID:(id)arg1 ;
-(NSString *)ID;
-(NSData *)encryptedID;
-(void)setEncryptedID:(NSData *)arg1 ;
-(void)setID:(NSString *)arg1 ;
@end
