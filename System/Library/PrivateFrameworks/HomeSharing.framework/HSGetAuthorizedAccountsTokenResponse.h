/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HSResponse.h>

@class NSData;

@interface HSGetAuthorizedAccountsTokenResponse : HSResponse {

	NSData* tokenData;

}

@property (nonatomic,copy) NSData * tokenData; 
-(NSData *)tokenData;
-(void)setTokenData:(NSData *)arg1 ;
@end
