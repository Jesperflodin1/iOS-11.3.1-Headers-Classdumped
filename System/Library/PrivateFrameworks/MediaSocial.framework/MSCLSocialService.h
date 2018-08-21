/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MSCLSocialService : NSObject <NSCopying> {

	NSString* _identifier;
	long long _maximumNumberOfCharacters;
	NSString* _storeItemIdentifier;

}

@property (nonatomic,copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfCharacters;              //@synthesize maximumNumberOfCharacters=_maximumNumberOfCharacters - In the implementation block
@property (nonatomic,copy) NSString * storeItemIdentifier;                     //@synthesize storeItemIdentifier=_storeItemIdentifier - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)storeItemIdentifier;
-(void)setStoreItemIdentifier:(NSString *)arg1 ;
-(long long)maximumNumberOfCharacters;
-(void)setMaximumNumberOfCharacters:(long long)arg1 ;
-(id)initWithServiceDictionary:(id)arg1 ;
@end
