/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRResponseMessage.h>

@class NSSet;

@interface TRSetupAuthenticationResponse : TRResponseMessage {

	NSSet* _unauthenticatedAccountServices;

}

@property (nonatomic,retain) NSSet * unauthenticatedAccountServices;              //@synthesize unauthenticatedAccountServices=_unauthenticatedAccountServices - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setUnauthenticatedAccountServices:(NSSet *)arg1 ;
-(NSSet *)unauthenticatedAccountServices;
@end
