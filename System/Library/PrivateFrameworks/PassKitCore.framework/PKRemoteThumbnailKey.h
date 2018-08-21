/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface PKRemoteThumbnailKey : NSObject <NSCopying> {

	NSString* _requestIdentifier;
	NSDictionary* _requestDictionary;

}

@property (nonatomic,retain) NSString * requestIdentifier;                  //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * requestDictionary;              //@synthesize requestDictionary=_requestDictionary - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(BOOL)isEqualToRemoteThumbnailKey:(id)arg1 ;
-(NSDictionary *)requestDictionary;
-(void)setRequestDictionary:(NSDictionary *)arg1 ;
-(NSString *)requestIdentifier;
@end
