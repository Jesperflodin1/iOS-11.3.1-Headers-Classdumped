//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSObject, NSString, UIPageControl, UIScrollView;
@protocol CbAUInstParameterDelegate;

@interface CbAUInstParameterViewController : UIViewController <UIScrollViewDelegate>
{
    int _sizeClass;
    NSObject<CbAUInstParameterDelegate> *_auPluginDelegate;
    NSMutableArray *_cachedPluginParameters;
    UIScrollView *_scrollView;
    UIPageControl *_pageIndicator;
    NSMutableArray *_pageViewControllers;
}

@property(retain, nonatomic) NSMutableArray *pageViewControllers; // @synthesize pageViewControllers=_pageViewControllers;
@property(retain, nonatomic) UIPageControl *pageIndicator; // @synthesize pageIndicator=_pageIndicator;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMutableArray *cachedPluginParameters; // @synthesize cachedPluginParameters=_cachedPluginParameters;
@property(nonatomic) int sizeClass; // @synthesize sizeClass=_sizeClass;
@property(nonatomic) NSObject<CbAUInstParameterDelegate> *auPluginDelegate; // @synthesize auPluginDelegate=_auPluginDelegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)unloadPage:(long long)arg1;
- (void)loadPage:(long long)arg1;
- (void)preparePage:(long long)arg1;
- (id)viewControllerAtIndex:(long long)arg1;
- (void)refreshParameterView;
- (void)updateParameter:(long long)arg1 withValueDict:(id)arg2;
- (void)setPluginInfoArray:(id)arg1;
- (void)setSizeClass:(int)arg1 andViewRect:(struct CGRect)arg2;
- (int)maxSizeClass;
- (long long)numberOfParameterPerPageForSizeClass:(int)arg1;
- (long long)numRowsPerPage;
- (void)loadView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

