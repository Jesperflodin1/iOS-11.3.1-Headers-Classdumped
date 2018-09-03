//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CbInstrumentBrowserSecondLevelViewController-Protocol.h"
#import "MAUIFlipViewDataSource-Protocol.h"
#import "MAUIFlipViewDelegate-Protocol.h"

@class CbInstrumentBrowserController, CbNavBarButton, MAUIFlipView, NSArray, NSDictionary, NSString, UIImageView, UIView;

@interface CbInstrumentBrowserDrummerCharacterViewController : UIViewController <MAUIFlipViewDelegate, MAUIFlipViewDataSource, CbInstrumentBrowserSecondLevelViewController>
{
    MAUIFlipView *_flipView;
    NSArray *_drummerKeys;
    NSDictionary *_currentSelectedDrummerKey;
    long long _selectedKeyIndex;
    struct CGRect _imageRect;
    _Bool _cleanAfterHideAnimation;
    _Bool _alreadySelected;
    UIView *_storeFrontBar;
    _Bool _animating;
    id target;
    SEL action;
    CbInstrumentBrowserController *_instrumentBrowser;
    UIImageView *_backgroundImageView;
    CbNavBarButton *_backButton;
}

+ (void)hideFullScreenAfterDrummerSelection:(_Bool)arg1;
+ (_Bool)fullScreenIsVisible;
+ (void)showFullscreenAnimated:(_Bool)arg1 target:(id)arg2 action:(SEL)arg3 selectedCharDict:(id)arg4;
@property(retain, nonatomic) CbNavBarButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) CbInstrumentBrowserController *instrumentBrowser; // @synthesize instrumentBrowser=_instrumentBrowser;
@property(nonatomic) SEL action; // @synthesize action;
@property(nonatomic) __weak id target; // @synthesize target;
@property(retain, nonatomic) MAUIFlipView *flipView; // @synthesize flipView=_flipView;
- (void).cxx_destruct;
- (id)viewsToHideDuringAnimation;
- (void)flipView:(id)arg1 animationDidStop:(id)arg2;
- (void)flipView:(id)arg1 animationDidStart:(id)arg2;
- (void)flipViewDidScroll:(id)arg1;
- (void)centerViewChangedInFlipView:(id)arg1;
- (long long)numberOfViewsInFlipView:(id)arg1;
- (id)flipView:(id)arg1 viewAtIndex:(long long)arg2;
- (void)storeFrontBtnPressed:(id)arg1;
- (void)backBtnPressed:(id)arg1;
- (void)setCurrentSelectedDrummerDict:(id)arg1;
- (void)loadGenres;
- (void)updateIcons;
- (void)updateInfo:(_Bool)arg1;
- (void)tapDrummer;
- (void)hideIconsAndClean:(_Bool)arg1 duration:(float)arg2;
- (void)clean;
- (void)selectInstrument:(id)arg1;
- (void)reset;
- (void)updateStoreButtonVisibility;
- (void)contentReadStatusChanges:(id)arg1;
- (struct CGRect)transitionZoomRect;
- (id)viewForTransition;
- (id)navBarSpecialView;
- (id)navBarSpecialViewForNavBarSize:(struct CGSize)arg1;
- (id)navBarCenterLabelString;
- (unsigned long long)supportedInterfaceOrientations;
- (id)nibName;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_commonInit;
- (void)dealloc;
- (void)cleanUp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
