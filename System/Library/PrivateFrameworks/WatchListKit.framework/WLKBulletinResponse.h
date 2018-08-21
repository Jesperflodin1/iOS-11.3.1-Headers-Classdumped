/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class BBActionResponse, NSString, NSDictionary;

@interface WLKBulletinResponse : NSObject <NSSecureCoding> {

	BBActionResponse* _actionResponse;

}

@property (nonatomic,retain) BBActionResponse * actionResponse;                  //@synthesize actionResponse=_actionResponse - In the implementation block
@property (nonatomic,readonly) long long bulletinSource; 
@property (nonatomic,copy,readonly) NSString * coalescingID; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * message; 
@property (nonatomic,copy,readonly) NSDictionary * bulletinMetrics; 
@property (nonatomic,copy,readonly) NSDictionary * actionMetrics; 
@property (nonatomic,copy,readonly) NSDictionary * userInfo; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDictionary *)userInfo;
-(NSString *)title;
-(NSString *)message;
-(void)setActionResponse:(BBActionResponse *)arg1 ;
-(long long)bulletinSource;
-(NSString *)coalescingID;
-(NSDictionary *)bulletinMetrics;
-(NSDictionary *)actionMetrics;
-(BBActionResponse *)actionResponse;
@end

