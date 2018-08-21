/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface PKMapContainer : NSObject <NSSecureCoding> {

	NSMutableDictionary* _recipientMap;
	NSMutableDictionary* _scoreMap;
	long long _version;

}

@property (nonatomic,copy,readonly) NSMutableDictionary * recipientMap;              //@synthesize recipientMap=_recipientMap - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * scoreMap;                  //@synthesize scoreMap=_scoreMap - In the implementation block
@property (nonatomic,readonly) long long version;                                    //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)removeAllObjects;
-(long long)version;
-(NSMutableDictionary *)recipientMap;
-(NSMutableDictionary *)scoreMap;
-(void)updateWithContainer:(id)arg1 ;
@end

