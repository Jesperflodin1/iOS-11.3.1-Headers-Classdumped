/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKit/UIPageViewController.h>
#import <PDFKit/PDFPageBackgroundManagerDelegate.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@class PDFDocumentViewControllerPrivate, NSString;

@interface PDFDocumentViewController : UIPageViewController <PDFPageBackgroundManagerDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate> {

	PDFDocumentViewControllerPrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)scrollView;
-(void)viewWillLayoutSubviews;
-(id)selection;
-(void)setSelection:(id)arg1 ;
-(double)scaleFactor;
-(id)currentPage;
-(id)document;
-(void)setScaleFactor:(double)arg1 ;
-(void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2 ;
-(void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(BOOL)hasBackgroundImage;
-(id)pageViewForPageAtIndex:(unsigned long long)arg1 ;
-(double)autoScaleFactor;
-(void)setAutoScales:(BOOL)arg1 ;
-(void)setMinScaleFactor:(double)arg1 withMaxScaleFactor:(double)arg2 ;
-(id)_pageViewControllerCreate:(int)arg1 ;
-(void)_updateCurrentPageViewController:(id)arg1 ;
-(void)willForceUpdate;
-(void)forceUpdateActivePageIndex:(unsigned long long)arg1 withMaxDuration:(double)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toPage:(id)arg2 ;
-(CGPoint)_convertPoint:(CGPoint)arg1 toPDFPageViewController:(id)arg2 ;
-(CGPoint)_convertPoint:(CGPoint)arg1 fromPDFPageViewController:(id)arg2 ;
-(id)pageViews;
-(void)clearTextSelectionHandles;
-(void)enableTextSelectionHandles;
-(id)_pageViewController:(id)arg1 nextViewController:(int)arg2 forViewController:(id)arg3 ;
-(id)findPageViewControllerForPageIndex:(long long)arg1 ;
-(id)backgroundImageForPage:(id)arg1 withQuality:(int*)arg2 ;
-(void)recieveBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2 forPage:(id)arg3 ;
-(id)initWithPDFView:(id)arg1 andNavigationOrientation:(long long)arg2 withRenderingProperties:(id)arg3 andOptions:(id)arg4 ;
-(void)goToPage:(id)arg1 direction:(long long)arg2 animated:(BOOL)arg3 ;
-(double)minScaleFactor;
-(double)maxScaleFactor;
-(void)setDisplaysRTL:(BOOL)arg1 ;
-(void)setScrollViewScrollEnabled:(BOOL)arg1 ;
-(void)updateScrollViews;
-(id)pageForPoint:(CGPoint)arg1 nearest:(BOOL)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromPage:(id)arg2 ;
@end

