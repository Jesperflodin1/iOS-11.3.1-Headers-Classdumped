/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRRequestMessage.h>

@class NSString;

@interface TRLegacyAnisetteDataRequest : TRRequestMessage {

	NSString* _dsid;

}

@property (nonatomic,copy) NSString * dsid;              //@synthesize dsid=_dsid - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
@end

