/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, VSScriptSecurityOrigin;

@interface VSScriptMessage : NSObject {

	NSString* _body;
	VSScriptSecurityOrigin* _source;
	VSScriptSecurityOrigin* _target;

}

@property (nonatomic,copy) NSString * body;                                //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) VSScriptSecurityOrigin * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) VSScriptSecurityOrigin * target;              //@synthesize target=_target - In the implementation block
-(id)description;
-(void)setSource:(VSScriptSecurityOrigin *)arg1 ;
-(VSScriptSecurityOrigin *)target;
-(void)setTarget:(VSScriptSecurityOrigin *)arg1 ;
-(NSString *)body;
-(void)setBody:(NSString *)arg1 ;
-(VSScriptSecurityOrigin *)source;
@end

