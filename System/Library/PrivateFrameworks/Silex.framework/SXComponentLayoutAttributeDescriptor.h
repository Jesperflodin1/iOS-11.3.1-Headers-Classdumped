/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXComponentDependencyDescriptor.h>

@interface SXComponentLayoutAttributeDescriptor : SXComponentDependencyDescriptor {

	BOOL _ignoreMargins;
	int _fromLayoutAttribute;
	int _toLayoutAttribute;

}

@property (assign,nonatomic) int fromLayoutAttribute;              //@synthesize fromLayoutAttribute=_fromLayoutAttribute - In the implementation block
@property (assign,nonatomic) int toLayoutAttribute;                //@synthesize toLayoutAttribute=_toLayoutAttribute - In the implementation block
@property (assign,nonatomic) BOOL ignoreMargins;                   //@synthesize ignoreMargins=_ignoreMargins - In the implementation block
+(id)descriptorWithFromLayoutAttribute:(int)arg1 toLayoutAttribute:(int)arg2 ignoreMargin:(BOOL)arg3 ;
-(int)toLayoutAttribute;
-(BOOL)ignoreMargins;
-(int)fromLayoutAttribute;
-(id)initWithFromLayoutAttribute:(int)arg1 toLayoutAttribute:(int)arg2 ignoreMargin:(BOOL)arg3 ;
-(void)setFromLayoutAttribute:(int)arg1 ;
-(void)setToLayoutAttribute:(int)arg1 ;
-(void)setIgnoreMargins:(BOOL)arg1 ;
@end
