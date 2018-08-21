/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSData, NSString;

@interface PinnedHTTPSSessionDelegate : NSObject <NSURLSessionDataDelegate> {

	BOOL _failed;
	NSData* _trustedCertData;

}

@property (nonatomic,retain) NSData * trustedCertData;              //@synthesize trustedCertData=_trustedCertData - In the implementation block
@property (assign,nonatomic) BOOL failed;                           //@synthesize failed=_failed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)failed;
-(void)setFailed:(BOOL)arg1 ;
-(void)setTrustedCertData:(NSData *)arg1 ;
-(NSData *)trustedCertData;
@end
