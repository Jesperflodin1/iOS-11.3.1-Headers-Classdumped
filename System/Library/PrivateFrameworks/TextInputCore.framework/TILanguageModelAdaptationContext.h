/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface TILanguageModelAdaptationContext : NSObject <NSCopying> {

	BOOL _isOnline;
	NSString* _appContext;
	NSString* _recipientNameDigest;
	NSDictionary* _recipientContext;

}

@property (nonatomic,readonly) NSString * appContext;                            //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,readonly) NSString * recipientNameDigest;                   //@synthesize recipientNameDigest=_recipientNameDigest - In the implementation block
@property (nonatomic,readonly) NSDictionary * recipientContext;                  //@synthesize recipientContext=_recipientContext - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * identifierForResponseKit; 
@property (assign,nonatomic) BOOL isOnline;                                      //@synthesize isOnline=_isOnline - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 andRecipientRecord:(id)arg2 ;
-(id)initWithClientIdentifier:(id)arg1 andRecipientContactInfo:(id)arg2 ;
-(NSString *)identifierForResponseKit;
-(NSString *)recipientNameDigest;
-(NSDictionary *)recipientContext;
-(void)setIsOnline:(BOOL)arg1 ;
-(NSString *)appContext;
-(BOOL)isOnline;
@end

