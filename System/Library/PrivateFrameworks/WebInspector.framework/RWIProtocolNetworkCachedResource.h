/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkResponse;

@interface RWIProtocolNetworkCachedResource : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) double bodySize; 
@property (nonatomic,retain) RWIProtocolNetworkResponse * response; 
@property (nonatomic,copy) NSString * sourceMapURL; 
-(void)setResponse:(RWIProtocolNetworkResponse *)arg1 ;
-(NSString *)url;
-(RWIProtocolNetworkResponse *)response;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setUrl:(NSString *)arg1 ;
-(void)setSourceMapURL:(NSString *)arg1 ;
-(NSString *)sourceMapURL;
-(id)initWithUrl:(id)arg1 type:(long long)arg2 bodySize:(double)arg3 ;
-(double)bodySize;
-(void)setBodySize:(double)arg1 ;
@end

