/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUIComposeReviewDelegate.h>

@class SKUIReviewInAppConfiguration, SKUIReviewInAppRatingViewController, SKUIComposeReviewViewController, SKUIStoreDialogController, SKUIProductReviewURLProvider, SKUIStarRatingQueue, NSString;

@interface SKUIReviewInAppController : NSObject <SKUIComposeReviewDelegate> {

	/*^block*/id _completion;
	SKUIReviewInAppConfiguration* _configuration;
	SKUIReviewInAppRatingViewController* _ratingViewController;
	SKUIComposeReviewViewController* _composeViewController;
	SKUIStoreDialogController* _dialogController;
	SKUIProductReviewURLProvider* _reviewURLProvider;
	SKUIStarRatingQueue* _starRatingQueue;

}

@property (nonatomic,copy) SKUIReviewInAppConfiguration * configuration;                              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) SKUIReviewInAppRatingViewController * ratingViewController;              //@synthesize ratingViewController=_ratingViewController - In the implementation block
@property (nonatomic,retain) SKUIComposeReviewViewController * composeViewController;                 //@synthesize composeViewController=_composeViewController - In the implementation block
@property (nonatomic,retain) SKUIStoreDialogController * dialogController;                            //@synthesize dialogController=_dialogController - In the implementation block
@property (nonatomic,retain) SKUIProductReviewURLProvider * reviewURLProvider;                        //@synthesize reviewURLProvider=_reviewURLProvider - In the implementation block
@property (nonatomic,retain) SKUIStarRatingQueue * starRatingQueue;                                   //@synthesize starRatingQueue=_starRatingQueue - In the implementation block
@property (nonatomic,copy) id completion;                                                             //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithConfiguration:(id)arg1 ;
-(void)start;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setConfiguration:(SKUIReviewInAppConfiguration *)arg1 ;
-(SKUIReviewInAppConfiguration *)configuration;
-(BOOL)composeReviewViewController:(id)arg1 shouldSubmitReview:(id)arg2 ;
-(void)composeReviewViewController:(id)arg1 didFailWithDialog:(id)arg2 ;
-(void)composeReviewViewControllerDidSubmit:(id)arg1 ;
-(void)composeReviewViewControllerDidCancel:(id)arg1 ;
-(void)setReviewURLProvider:(SKUIProductReviewURLProvider *)arg1 ;
-(SKUIProductReviewURLProvider *)reviewURLProvider;
-(void)_presentRatingPrompt;
-(void)_finishWithResult:(unsigned long long)arg1 error:(id)arg2 ;
-(void)_presentAlertForDialog:(id)arg1 ;
-(void)_promptForStarRatingDuringCompose:(id)arg1 ;
-(void)_composeReviewViewControllerDidFinish:(id)arg1 result:(unsigned long long)arg2 ;
-(void)setRatingViewController:(SKUIReviewInAppRatingViewController *)arg1 ;
-(SKUIReviewInAppRatingViewController *)ratingViewController;
-(void)_submitRating:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentWriteReview;
-(SKUIStarRatingQueue *)starRatingQueue;
-(void)setStarRatingQueue:(SKUIStarRatingQueue *)arg1 ;
-(void)composeReviewViewController:(id)arg1 presentDialog:(id)arg2 ;
-(SKUIComposeReviewViewController *)composeViewController;
-(void)setComposeViewController:(SKUIComposeReviewViewController *)arg1 ;
-(SKUIStoreDialogController *)dialogController;
-(void)setDialogController:(SKUIStoreDialogController *)arg1 ;
@end

