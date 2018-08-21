/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPointerArray, NSString;

@interface _UIVisualEffectViewBackdropCaptureGroup : NSObject {

	NSPointerArray* _backdrops;
	NSString* _groupName;
	double _scale;

}

@property (nonatomic,copy) NSString * groupName;              //@synthesize groupName=_groupName - In the implementation block
@property (assign,nonatomic) double scale;                    //@synthesize scale=_scale - In the implementation block
-(id)init;
-(double)scale;
-(id)description;
-(void)setScale:(double)arg1 ;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(long long)indexOfBackdropView:(id)arg1 ;
-(void)updateAllBackdropViews;
-(id)initWithBackdrop:(id)arg1 ;
-(void)addBackdrop:(id)arg1 update:(BOOL)arg2 ;
-(void)removeBackdrop:(id)arg1 update:(BOOL)arg2 ;
-(void)_applyScaleHint:(double)arg1 ;
@end
