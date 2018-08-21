/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VSJSResponsePayload.h>
@class NSString, NSDate, NSArray, NSNumber;


@protocol VSJSResponsePayload <JSExport>
@property (nonatomic,copy) NSString * authN; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSString * userMetadata; 
@property (nonatomic,copy) NSString * logout; 
@property (nonatomic,copy) NSArray * userChannelList; 
@property (nonatomic,copy) NSString * authenticationScheme; 
@property (nonatomic,copy) NSString * statusCode; 
@property (nonatomic,copy) NSNumber * expectedAction; 
@required
-(void)setStatusCode:(id)arg1;
-(id)init;
-(NSString *)statusCode;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(id)arg1;
-(NSString *)username;
-(NSString *)logout;
-(void)setUsername:(id)arg1;
-(NSString *)authN;
-(void)setAuthN:(id)arg1;
-(NSString *)userMetadata;
-(void)setUserMetadata:(id)arg1;
-(void)setLogout:(id)arg1;
-(NSArray *)userChannelList;
-(void)setUserChannelList:(id)arg1;
-(NSString *)authenticationScheme;
-(void)setAuthenticationScheme:(id)arg1;
-(NSNumber *)expectedAction;
-(void)setExpectedAction:(id)arg1;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSArray, NSNumber;

@interface VSJSResponsePayload : IKJSObject <VSJSResponsePayload, NSCopying> {

	NSString* _authN;
	NSString* _username;
	NSDate* _expirationDate;
	NSString* _userMetadata;
	NSString* _logout;
	NSArray* _userChannelList;
	NSString* _authenticationScheme;
	NSString* _statusCode;
	NSNumber* _expectedAction;

}

@property (nonatomic,copy) NSString * authN;                             //@synthesize authN=_authN - In the implementation block
@property (nonatomic,copy) NSString * username;                          //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                      //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSString * userMetadata;                      //@synthesize userMetadata=_userMetadata - In the implementation block
@property (nonatomic,copy) NSString * logout;                            //@synthesize logout=_logout - In the implementation block
@property (nonatomic,copy) NSArray * userChannelList;                    //@synthesize userChannelList=_userChannelList - In the implementation block
@property (nonatomic,copy) NSString * authenticationScheme;              //@synthesize authenticationScheme=_authenticationScheme - In the implementation block
@property (nonatomic,copy) NSString * statusCode;                        //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy) NSNumber * expectedAction;                    //@synthesize expectedAction=_expectedAction - In the implementation block
-(void)setStatusCode:(NSString *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)statusCode;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)username;
-(NSString *)logout;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)authN;
-(void)setAuthN:(NSString *)arg1 ;
-(NSString *)userMetadata;
-(void)setUserMetadata:(NSString *)arg1 ;
-(void)setLogout:(NSString *)arg1 ;
-(NSArray *)userChannelList;
-(void)setUserChannelList:(NSArray *)arg1 ;
-(NSString *)authenticationScheme;
-(void)setAuthenticationScheme:(NSString *)arg1 ;
-(NSNumber *)expectedAction;
-(void)setExpectedAction:(NSNumber *)arg1 ;
@end

