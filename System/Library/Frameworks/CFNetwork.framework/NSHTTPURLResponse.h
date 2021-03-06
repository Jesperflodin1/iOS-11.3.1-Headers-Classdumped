/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLResponse.h>

@class NSHTTPURLResponseInternal, NSDictionary;

@interface NSHTTPURLResponse : NSURLResponse {

	NSHTTPURLResponseInternal* _httpInternal;

}

@property (readonly) long long statusCode; 
@property (copy,readonly) NSDictionary * allHeaderFields; 
+(BOOL)isErrorStatusCode:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)localizedStringForStatusCode:(long long)arg1 ;
-(id)_initWithCFURLResponse:(CFURLResponseRef)arg1 ;
-(id)_peerCertificateChain;
-(id)_allHTTPHeaderFieldsAsArrays;
-(id)initWithURL:(id)arg1 statusCode:(long long)arg2 headerFields:(id)arg3 requestTime:(double)arg4 ;
-(id)_clientCertificateChain;
-(id)_clientCertificateState;
-(void)_setPeerTrust:(SecTrustRef)arg1 ;
-(SecTrustRef)_peerTrust;
-(NSDictionary *)allHeaderFields;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(long long)statusCode;
-(id)initWithURL:(id)arg1 statusCode:(long long)arg2 HTTPVersion:(id)arg3 headerFields:(id)arg4 ;
@end

