/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <Foundation/NSValueTransformer.h>

@interface VSImageScaleValueTransformer : NSValueTransformer {

	CGSize _preferredSize;

}

@property (assign,nonatomic) CGSize preferredSize;              //@synthesize preferredSize=_preferredSize - In the implementation block
+(Class)transformedValueClass;
+(BOOL)allowsReverseTransformation;
-(CGSize)preferredSize;
-(id)transformedValue:(id)arg1 ;
-(void)setPreferredSize:(CGSize)arg1 ;
@end

