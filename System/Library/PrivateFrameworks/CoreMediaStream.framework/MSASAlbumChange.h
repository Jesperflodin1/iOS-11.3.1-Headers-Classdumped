/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MSASInvitation;

@interface MSASAlbumChange : NSObject {

	BOOL _wasDeleted;
	NSString* _GUID;
	NSString* _ownerEmail;
	NSString* _ownerPersonID;
	NSString* _ownerFullName;
	NSString* _ownerFirstName;
	NSString* _ownerLastName;
	NSString* _URLString;
	MSASInvitation* _invitation;
	NSString* _name;

}

@property (nonatomic,copy) NSString * ownerEmail;                      //@synthesize ownerEmail=_ownerEmail - In the implementation block
@property (nonatomic,copy) NSString * ownerPersonID;                   //@synthesize ownerPersonID=_ownerPersonID - In the implementation block
@property (nonatomic,copy) NSString * ownerFullName;                   //@synthesize ownerFullName=_ownerFullName - In the implementation block
@property (nonatomic,copy) NSString * ownerFirstName;                  //@synthesize ownerFirstName=_ownerFirstName - In the implementation block
@property (nonatomic,copy) NSString * ownerLastName;                   //@synthesize ownerLastName=_ownerLastName - In the implementation block
@property (getter=UID,nonatomic,retain) NSString * GUID;               //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSString * URLString;                     //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL wasDeleted;                          //@synthesize wasDeleted=_wasDeleted - In the implementation block
@property (nonatomic,retain) MSASInvitation * invitation;              //@synthesize invitation=_invitation - In the implementation block
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)URLString;
-(BOOL)wasDeleted;
-(void)setWasDeleted:(BOOL)arg1 ;
-(void)setOwnerEmail:(NSString *)arg1 ;
-(void)setOwnerPersonID:(NSString *)arg1 ;
-(void)setOwnerFullName:(NSString *)arg1 ;
-(void)setGUID:(NSString *)arg1 ;
-(NSString *)ownerEmail;
-(NSString *)ownerFirstName;
-(NSString *)ownerLastName;
-(NSString *)ownerFullName;
-(NSString *)ownerPersonID;
-(void)setURLString:(NSString *)arg1 ;
-(void)setInvitation:(MSASInvitation *)arg1 ;
-(MSASInvitation *)invitation;
-(void)setOwnerFirstName:(NSString *)arg1 ;
-(void)setOwnerLastName:(NSString *)arg1 ;
-(NSString *)GUID;
@end

