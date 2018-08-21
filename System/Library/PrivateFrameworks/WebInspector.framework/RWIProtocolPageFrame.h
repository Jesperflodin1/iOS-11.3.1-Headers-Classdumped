/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolPageFrame : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * loaderId; 
@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSString * securityOrigin; 
@property (nonatomic,copy) NSString * mimeType; 
@property (nonatomic,copy) NSString * parentId; 
@property (nonatomic,copy) NSString * name; 
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(NSString *)url;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)mimeType;
-(void)setSecurityOrigin:(NSString *)arg1 ;
-(void)setLoaderId:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 loaderId:(id)arg2 url:(id)arg3 securityOrigin:(id)arg4 mimeType:(id)arg5 ;
-(NSString *)parentId;
-(NSString *)loaderId;
-(void)setParentId:(NSString *)arg1 ;
-(void)setMimeType:(NSString *)arg1 ;
-(NSString *)securityOrigin;
@end
