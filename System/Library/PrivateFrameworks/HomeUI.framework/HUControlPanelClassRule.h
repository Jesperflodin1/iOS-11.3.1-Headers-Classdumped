/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HUControlPanelRule.h>

@class Protocol, NSString;

@interface HUControlPanelClassRule : NSObject <HUControlPanelRule> {

	double _priority;
	Class _class;
	Protocol* _protocol;

}

@property (nonatomic,copy) Class class;                             //@synthesize class=_class - In the implementation block
@property (nonatomic,retain) Protocol * protocol;                   //@synthesize protocol=_protocol - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double priority;                       //@synthesize priority=_priority - In the implementation block
+(id)ruleWithControlItemClass:(Class)arg1 ;
+(id)ruleWithControlItemProtocol:(id)arg1 ;
-(Class)class;
-(void)setPriority:(double)arg1 ;
-(double)priority;
-(Protocol *)protocol;
-(void)setProtocol:(Protocol *)arg1 ;
-(BOOL)ruleMatchesItem:(id)arg1 ;
-(id)initWithControlItemClass:(Class)arg1 protocol:(id)arg2 ;
-(void)setClass:(Class)arg1 ;
@end
