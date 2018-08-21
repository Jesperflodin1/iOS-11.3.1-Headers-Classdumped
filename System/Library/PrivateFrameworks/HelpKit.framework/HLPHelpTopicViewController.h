/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIWebViewDelegate.h>
#import <libobjc.A.dylib/HLPHelpTopicViewControllerDelegate.h>
#import <libobjc.A.dylib/HLPHelpLoadingViewDelegate.h>

@protocol HLPHelpTopicViewControllerDelegate;
@class HLPURLSession, HLPHelpBookController, NSCache, NSMutableArray, UIBarButtonItem, UITapGestureRecognizer, NSLayoutConstraint, NSURL, UIWebView, HLPHelpLocale, HLPHelpTopicHistoryItem, HLPHelpLoadingView, HLPHelpUsageController, NSArray, NSString;

@interface HLPHelpTopicViewController : UIViewController <UIGestureRecognizerDelegate, UIWebViewDelegate, HLPHelpTopicViewControllerDelegate, HLPHelpLoadingViewDelegate> {

	id _interactivePopGestureRecognizerDelegate;
	BOOL _canShowTOC;
	BOOL _webViewLoaded;
	BOOL _RTL;
	HLPURLSession* _URLSession;
	HLPHelpBookController* _helpBookController;
	NSCache* _topicCache;
	NSMutableArray* _topicHistory;
	UIBarButtonItem* _tocBarButtonItem;
	UIBarButtonItem* _backBarButtonItem;
	UIBarButtonItem* _forwardBarButtonItem;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSLayoutConstraint* _loadingViewTopConstraint;
	BOOL _displayHelpTopicsOnly;
	BOOL _hideDoneButton;
	BOOL _showTopicNameAsTitle;
	id<HLPHelpTopicViewControllerDelegate> _delegate;
	NSURL* _helpBookURL;
	UIWebView* _webView;
	HLPHelpLocale* _locale;
	HLPHelpTopicHistoryItem* _currentTopicHistoryItem;
	HLPHelpLoadingView* _loadingView;
	HLPHelpUsageController* _usageController;
	NSArray* _searchTerms;

}

@property (nonatomic,retain) NSArray * searchTerms;                                               //@synthesize searchTerms=_searchTerms - In the implementation block
@property (assign,nonatomic,__weak) id<HLPHelpTopicViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL displayHelpTopicsOnly;                                          //@synthesize displayHelpTopicsOnly=_displayHelpTopicsOnly - In the implementation block
@property (assign,nonatomic) BOOL hideDoneButton;                                                 //@synthesize hideDoneButton=_hideDoneButton - In the implementation block
@property (assign,nonatomic) BOOL showTopicNameAsTitle;                                           //@synthesize showTopicNameAsTitle=_showTopicNameAsTitle - In the implementation block
@property (nonatomic,retain) NSURL * helpBookURL;                                                 //@synthesize helpBookURL=_helpBookURL - In the implementation block
@property (nonatomic,retain) UIWebView * webView;                                                 //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) HLPHelpLocale * locale;                                              //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) HLPHelpBookController * helpBookController;                          //@synthesize helpBookController=_helpBookController - In the implementation block
@property (nonatomic,retain) HLPHelpTopicHistoryItem * currentTopicHistoryItem;                   //@synthesize currentTopicHistoryItem=_currentTopicHistoryItem - In the implementation block
@property (nonatomic,retain) HLPHelpLoadingView * loadingView;                                    //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) HLPHelpUsageController * usageController;                            //@synthesize usageController=_usageController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<HLPHelpTopicViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HLPHelpTopicViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)setLocale:(HLPHelpLocale *)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)dismiss;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(HLPHelpLocale *)locale;
-(NSArray *)searchTerms;
-(void)setSearchTerms:(NSArray *)arg1 ;
-(void)updateNavigationButtons;
-(void)updateDoneButton;
-(void)setLoadingView:(HLPHelpLoadingView *)arg1 ;
-(HLPHelpLoadingView *)loadingView;
-(NSURL *)helpBookURL;
-(void)setHelpBookController:(HLPHelpBookController *)arg1 ;
-(HLPHelpBookController *)helpBookController;
-(HLPHelpUsageController *)usageController;
-(void)setUsageController:(HLPHelpUsageController *)arg1 ;
-(void)setHelpBookURL:(NSURL *)arg1 ;
-(BOOL)displayHelpTopicsOnly;
-(void)setShowTopicNameAsTitle:(BOOL)arg1 ;
-(void)loadHelpTopicItem:(id)arg1 searchTerms:(id)arg2 anchor:(id)arg3 ;
-(void)showHelpBookInfo:(id)arg1 ;
-(void)reloadCurrentTopic;
-(void)helpTopicViewControllerShowHelpBookInfo:(id)arg1 ;
-(void)helpTopicViewControllerDoneButtonTapped:(id)arg1 ;
-(void)helpTopicViewController:(id)arg1 failToLoadWithError:(id)arg2 ;
-(void)helpTopicViewControllerCurrentTopicIsPassionPoint:(id)arg1 ;
-(BOOL)showTopicNameAsTitle;
-(void)showWebViewDelay;
-(void)showTableOfContent;
-(void)backButtonTapped;
-(void)forwardButtonTapped;
-(void)updateScrollPositionForCurrentTopicItem;
-(void)saveCurrentTopicItem;
-(void)loadHelpTopicItem:(id)arg1 searchTerms:(id)arg2 anchor:(id)arg3 topicAccessType:(long long)arg4 ;
-(void)dismissWelcomeHelpTopic;
-(void)loadHTMLString:(id)arg1 anchor:(id)arg2 ;
-(void)updateHTMLStringPath:(id)arg1 tag:(id)arg2 attribute:(id)arg3 ;
-(HLPHelpTopicHistoryItem *)currentTopicHistoryItem;
-(void)setCurrentTopicHistoryItem:(HLPHelpTopicHistoryItem *)arg1 ;
-(void)setDisplayHelpTopicsOnly:(BOOL)arg1 ;
-(BOOL)hideDoneButton;
-(void)setHideDoneButton:(BOOL)arg1 ;
@end

