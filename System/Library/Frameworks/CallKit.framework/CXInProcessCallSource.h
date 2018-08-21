/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CXCallSource.h>

@class CXInProcessProvider;

@interface CXInProcessCallSource : CXCallSource {

	CXInProcessProvider* _provider;

}

@property (nonatomic,retain) CXInProcessProvider * provider;              //@synthesize provider=_provider - In the implementation block
-(id)identifier;
-(CXInProcessProvider *)provider;
-(int)processIdentifier;
-(void)setProvider:(CXInProcessProvider *)arg1 ;
-(id)vendorProtocolDelegate;
-(BOOL)isPermittedToUsePublicAPI;
-(BOOL)isPermittedToUsePrivateAPI;
@end
