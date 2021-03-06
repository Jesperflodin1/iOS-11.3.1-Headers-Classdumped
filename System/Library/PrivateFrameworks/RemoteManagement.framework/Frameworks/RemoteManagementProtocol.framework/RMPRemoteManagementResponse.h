/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSArray;

@interface RMPRemoteManagementResponse : CEMPayloadBase {

	NSString* _UDID;
	NSString* _userShortName;
	NSString* _syncToken;
	NSString* _status;
	NSString* _requestUUID;
	NSArray* _errorChain;

}

@property (nonatomic,retain) NSString * UDID;                       //@synthesize UDID=_UDID - In the implementation block
@property (nonatomic,retain) NSString * userShortName;              //@synthesize userShortName=_userShortName - In the implementation block
@property (nonatomic,retain) NSString * syncToken;                  //@synthesize syncToken=_syncToken - In the implementation block
@property (nonatomic,retain) NSString * status;                     //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * requestUUID;                //@synthesize requestUUID=_requestUUID - In the implementation block
@property (nonatomic,retain) NSArray * errorChain;                  //@synthesize errorChain=_errorChain - In the implementation block
-(void)setStatus:(NSString *)arg1 ;
-(NSString *)status;
-(NSString *)UDID;
-(NSString *)requestUUID;
-(void)setRequestUUID:(NSString *)arg1 ;
-(NSString *)syncToken;
-(void)setSyncToken:(NSString *)arg1 ;
-(id)serialize;
-(void)setUDID:(NSString *)arg1 ;
-(NSString *)userShortName;
-(void)setUserShortName:(NSString *)arg1 ;
-(BOOL)loadResponseFromDictionary:(id)arg1 error:(id*)arg2 ;
-(NSArray *)errorChain;
-(void)setErrorChain:(NSArray *)arg1 ;
@end

