/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@protocol HFIconDescriptor;
@interface HFServiceIconItem : HFItem {

	id<HFIconDescriptor> _iconDescriptor;

}

@property (nonatomic,readonly) id<HFIconDescriptor> iconDescriptor;              //@synthesize iconDescriptor=_iconDescriptor - In the implementation block
-(id)initWithIconDescriptor:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id<HFIconDescriptor>)iconDescriptor;
@end

