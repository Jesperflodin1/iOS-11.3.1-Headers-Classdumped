/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/_MKAnimationStackViewDelegate.h>
#import <libobjc.A.dylib/MKPlaceSectionViewDelegate.h>

@class MKPlaceSectionView, NSString;

@interface MKPlaceSectionViewController : UIViewController <_MKAnimationStackViewDelegate, MKPlaceSectionViewDelegate> {

	MKPlaceSectionView* _sectionView;

}

@property (nonatomic,readonly) MKPlaceSectionView * sectionView;              //@synthesize sectionView=_sectionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(BOOL)_viewHostsLayoutEngineAllowsTAMIC_NO;
-(void)sectionView:(id)arg1 didSelectHeader:(id)arg2 ;
-(void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)sectionView:(id)arg1 didDeselectRow:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)sectionView:(id)arg1 didSelectFooter:(id)arg2 ;
-(void)stackViewNeedsLayout:(id)arg1 ;
-(MKPlaceSectionView *)sectionView;
@end

