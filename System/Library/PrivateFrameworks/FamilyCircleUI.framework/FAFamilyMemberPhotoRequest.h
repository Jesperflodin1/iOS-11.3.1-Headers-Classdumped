/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAFamilyRequest.h>

@class NSNumber, SSAccount, NSString;

@interface FAFamilyMemberPhotoRequest : AAFamilyRequest {

	NSNumber* _familyMemberDSID;
	SSAccount* _iTunesAccount;
	NSString* _serverCacheTag;

}

@property (nonatomic,copy) NSNumber * familyMemberDSID;                                       //@synthesize familyMemberDSID=_familyMemberDSID - In the implementation block
@property (setter=setiTunesAccount:,nonatomic,retain) SSAccount * iTunesAccount;              //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
@property (nonatomic,copy) NSString * serverCacheTag;                                         //@synthesize serverCacheTag=_serverCacheTag - In the implementation block
+(Class)responseClass;
-(id)urlRequest;
-(NSString *)serverCacheTag;
-(void)setServerCacheTag:(NSString *)arg1 ;
-(void)setiTunesAccount:(id)arg1 ;
-(void)setFamilyMemberDSID:(NSNumber *)arg1 ;
-(SSAccount *)iTunesAccount;
-(id)urlString;
-(NSNumber *)familyMemberDSID;
@end

