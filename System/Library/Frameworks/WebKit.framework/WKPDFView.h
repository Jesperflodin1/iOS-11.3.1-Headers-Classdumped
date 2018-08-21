/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/_WKWebViewPrintProvider.h>
#import <libobjc.A.dylib/WKWebViewContentProvider.h>
#import <UIKit/UIPDFPageViewDelegate.h>
#import <UIKit/UIPDFAnnotationControllerDelegate.h>
#import <libobjc.A.dylib/WKActionSheetAssistantDelegate.h>

@protocol OS_dispatch_queue;
@class WKWebView, UIScrollView, UIView, NSObject, NSString;

@interface WKPDFView : UIView <_WKWebViewPrintProvider, WKWebViewContentProvider, UIPDFPageViewDelegate, UIPDFAnnotationControllerDelegate, WKActionSheetAssistantDelegate> {

	RetainPtr<CGPDFDocument *>* _cgPDFDocument;
	RetainPtr<UIPDFDocument>* _pdfDocument;
	RetainPtr<NSString>* _suggestedFilename;
	RetainPtr<WKPDFPageNumberIndicator>* _pageNumberIndicator;
	Vector<PDFPageInfo, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>* _pages;
	unsigned _centerPageNumber;
	CGSize _minimumSize;
	CGSize _overlaidAccessoryViewsInset;
	WKWebView* _webView;
	UIScrollView* _scrollView;
	UIView* _fixedOverlayView;
	BOOL _isStartingZoom;
	BOOL _isPerformingSameDocumentNavigation;
	RetainPtr<WKActionSheetAssistant>* _actionSheetAssistant;
	InteractionInformationAtPosition* _positionInformation;
	unsigned _currentFindPageIndex;
	unsigned _currentFindMatchIndex;
	RetainPtr<UIPDFSelection>* _currentFindSelection;
	RetainPtr<NSString>* _cachedFindString;
	Vector<WTF::RetainPtr<UIPDFSelection>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>* _cachedFindMatches;
	unsigned _cachedFindMaximumCount;
	unsigned long long _cachedFindOptionsAffectingResults;
	atomic<unsigned int> _nextComputeMatchesOperationID;
	RetainPtr<NSString>* _nextCachedFindString;
	unsigned _nextCachedFindMaximumCount;
	unsigned long long _nextCachedFindOptionsAffectingResults;
	NSObject*<OS_dispatch_queue> _findQueue;
	RetainPtr<UIWKSelectionAssistant>* _webSelectionAssistant;
	unique_ptr<WebKit::ApplicationStateTracker, std::__1::default_delete<WebKit::ApplicationStateTracker> >* _applicationStateTracker;
	UIEdgeInsets _lastUnobscuredSafeAreaInset;
	double _lastLayoutWidth;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGPDFDocumentRef _wk_printedDocument; 
@property (nonatomic,readonly) NSString * suggestedFilename; 
@property (nonatomic,readonly) CGPDFDocumentRef pdfDocument; 
@property (nonatomic,readonly) BOOL isBackground; 
-(void)dealloc;
-(void)didMoveToWindow;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)_applicationDidEnterBackground;
-(CGPDFDocumentRef)pdfDocument;
-(void)willMoveToWindow:(id)arg1 ;
-(void)resetZoom:(id)arg1 ;
-(void)zoom:(id)arg1 to:(CGRect)arg2 atPoint:(CGPoint)arg3 kind:(int)arg4 ;
-(void)annotation:(id)arg1 wasTouchedAtPoint:(CGPoint)arg2 controller:(id)arg3 ;
-(void)annotation:(id)arg1 isBeingPressedAtPoint:(CGPoint)arg2 controller:(id)arg3 ;
-(void)actionSheetAssistant:(id)arg1 performAction:(int)arg2 ;
-(void)actionSheetAssistant:(id)arg1 openElementAtLocation:(CGPoint)arg2 ;
-(void)actionSheetAssistant:(id)arg1 shareElementWithURL:(id)arg2 rect:(CGRect)arg3 ;
-(unsigned long long)_wk_pageCountForPrintFormatter:(id)arg1 ;
-(CGPDFDocumentRef)_wk_printedDocument;
-(optional<WebKit::InteractionInformationAtPosition>*)positionInformationForActionSheetAssistant:(id)arg1 ;
-(RetainPtr<NSArray>*)actionSheetAssistant:(id)arg1 decideActionsForElement:(id)arg2 defaultActions:(RetainPtr<NSArray>*)arg3 ;
-(BOOL)actionSheetAssistant:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2 ;
-(void)_applicationDidCreateWindowContext;
-(void)_applicationDidFinishSnapshottingAfterEnteringBackground;
-(void)_clearPages;
-(void)_computePageAndDocumentFrames;
-(void)_revalidateViews;
-(void)_scrollToFragment:(id)arg1 ;
-(void)_didLoadPDFDocument;
-(void)_showPasswordEntryField;
-(void)_ensureViewForPage:(SCD_Struct_WK221*)arg1 ;
-(void)_updatePageNumberIndicator;
-(CGPoint)_offsetForPageNumberIndicator;
-(void)_resetZoomAnimated:(BOOL)arg1 ;
-(void)_updateDocumentFrame;
-(void)_computeMatchesForString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_didFindMatch:(id)arg1 ;
-(id)_URLForLinkAnnotation:(id)arg1 ;
-(void)_highlightLinkAnnotation:(id)arg1 forDuration:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)web_initWithFrame:(CGRect)arg1 webView:(id)arg2 ;
-(void)web_setContentProviderData:(id)arg1 suggestedFilename:(id)arg2 ;
-(void)web_setMinimumSize:(CGSize)arg1 ;
-(void)web_setOverlaidAccessoryViewsInset:(CGSize)arg1 ;
-(void)web_computedContentInsetDidChange;
-(void)web_setFixedOverlayView:(id)arg1 ;
-(void)web_didSameDocumentNavigation:(unsigned)arg1 ;
-(void)web_countStringMatches:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(void)web_findString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(void)web_hideFindUI;
-(NSString *)suggestedFilename;
-(void)_applicationWillEnterForeground;
-(BOOL)isBackground;
@end
