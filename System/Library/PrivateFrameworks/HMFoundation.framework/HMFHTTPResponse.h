/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class HMFHTTPResponseInternal, HMFHTTPRequest, NSDictionary, NSData;

@interface HMFHTTPResponse : HMFObject <NSCopying, NSMutableCopying> {

	HMFHTTPResponseInternal* _internal;
	HMFHTTPRequest* _request;

}

@property (nonatomic,readonly) HMFHTTPResponseInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) HMFHTTPRequest * request;                        //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) long long statusCode; 
@property (nonatomic,readonly) NSDictionary * headerFields; 
@property (nonatomic,readonly) NSData * body; 
+(id)shortDescription;
-(NSDictionary *)headerFields;
-(id)init;
-(id)description;
-(id)debugDescription;
-(HMFHTTPRequest *)request;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)body;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)statusCode;
-(id)shortDescription;
-(id)initWithRequest:(id)arg1 internalResponse:(id)arg2 ;
-(HMFHTTPResponseInternal *)internal;
-(id)descriptionWithPointer:(BOOL)arg1 ;
@end

