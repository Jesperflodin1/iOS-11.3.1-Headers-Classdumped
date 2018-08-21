/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CXHandle, NSDictionary;

@interface CXHandoffContext : NSObject <NSSecureCoding> {

	BOOL _outgoing;
	NSString* _handoffIdentifier;
	CXHandle* _remoteHandle;
	NSDictionary* _context;

}

@property (nonatomic,copy,readonly) NSString * handoffIdentifier;                         //@synthesize handoffIdentifier=_handoffIdentifier - In the implementation block
@property (assign,getter=isOutgoing,nonatomic) BOOL outgoing;                             //@synthesize outgoing=_outgoing - In the implementation block
@property (nonatomic,copy) CXHandle * remoteHandle;                                       //@synthesize remoteHandle=_remoteHandle - In the implementation block
@property (nonatomic,copy) NSDictionary * context;                                        //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)handoffIdentifier;
-(CXHandle *)remoteHandle;
-(id)initWithHandoffIdentifier:(id)arg1 ;
-(BOOL)isEqualToHandoffContext:(id)arg1 ;
-(void)setRemoteHandle:(CXHandle *)arg1 ;
-(void)setOutgoing:(BOOL)arg1 ;
-(BOOL)isOutgoing;
@end

