/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <libobjc.A.dylib/MiroMemoryDebugCollectionViewControllerProtocol.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol MiroMemoryDebugCollectionViewControllerDelegate;
@class MiroMemory, MiroAutoEditController, Project, UIProgressView, UIAlertView, MiroMovie, NSArray, NSMutableDictionary, PHFetchResult, UIBarButtonItem, UIView, NSString;

@interface MiroMemoryDebugCollectionViewController : UICollectionViewController <MiroMemoryDebugCollectionViewControllerProtocol, UIAlertViewDelegate> {

	BOOL _isSaveMode;
	BOOL _textOnly;
	BOOL _hackReuseCell;
	BOOL _cancelled;
	BOOL _syncPreview;
	UIProgressView* _progressView;
	UIAlertView* _alertView;
	id<MiroMemoryDebugCollectionViewControllerDelegate> _delegate;
	MiroMemory* _memory;
	MiroMovie* _miroMovie;
	Project* _project;
	unsigned long long _currentSortType;
	NSArray* _sortTitles;
	MiroAutoEditController* _autoEditController;
	NSMutableDictionary* _projectMoodNamedTransitions;
	PHFetchResult* _curatedAssets;
	UIBarButtonItem* _sortBarButton;
	UIView* _textContainerView;

}

@property (assign,nonatomic) unsigned long long currentSortType;                                               //@synthesize currentSortType=_currentSortType - In the implementation block
@property (nonatomic,retain) NSArray * sortTitles;                                                             //@synthesize sortTitles=_sortTitles - In the implementation block
@property (nonatomic,retain) MiroAutoEditController * autoEditController;                                      //@synthesize autoEditController=_autoEditController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * projectMoodNamedTransitions;                                //@synthesize projectMoodNamedTransitions=_projectMoodNamedTransitions - In the implementation block
@property (assign,nonatomic) BOOL isSaveMode;                                                                  //@synthesize isSaveMode=_isSaveMode - In the implementation block
@property (assign,nonatomic) BOOL textOnly;                                                                    //@synthesize textOnly=_textOnly - In the implementation block
@property (assign,nonatomic) BOOL hackReuseCell;                                                               //@synthesize hackReuseCell=_hackReuseCell - In the implementation block
@property (nonatomic,retain) PHFetchResult * curatedAssets;                                                    //@synthesize curatedAssets=_curatedAssets - In the implementation block
@property (assign) BOOL cancelled;                                                                             //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * sortBarButton;                                           //@synthesize sortBarButton=_sortBarButton - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                                    //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIAlertView * alertView;                                                          //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,retain) UIView * textContainerView;                                                       //@synthesize textContainerView=_textContainerView - In the implementation block
@property (assign) BOOL syncPreview;                                                                           //@synthesize syncPreview=_syncPreview - In the implementation block
@property (assign,nonatomic,__weak) id<MiroMemoryDebugCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) MiroMemory * memory;                                                                        //@synthesize memory=_memory - In the implementation block
@property (retain) MiroMovie * miroMovie;                                                                      //@synthesize miroMovie=_miroMovie - In the implementation block
@property (retain) Project * project;                                                                          //@synthesize project=_project - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MiroMemoryDebugCollectionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MiroMemoryDebugCollectionViewControllerDelegate>)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)done:(id)arg1 ;
-(void)setCuratedAssets:(PHFetchResult *)arg1 ;
-(MiroMemory *)memory;
-(void)setMemory:(MiroMemory *)arg1 ;
-(PHFetchResult *)curatedAssets;
-(UIProgressView *)progressView;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(void)setSortTitles:(NSArray *)arg1 ;
-(NSArray *)sortTitles;
-(Project *)project;
-(void)setSyncPreview:(BOOL)arg1 ;
-(UIBarButtonItem *)sortBarButton;
-(UIAlertView *)alertView;
-(void)createDebugGraphics;
-(void)pickInfoAndAsset:(id*)arg1 asset:(id*)arg2 fromIndexPath:(id*)arg3 ;
-(BOOL)syncPreview;
-(UIView *)textContainerView;
-(void)setTextContainerView:(UIView *)arg1 ;
-(void)closeMemoryTransition:(id)arg1 ;
-(void)presentAirDropControllerWithDebugString:(id)arg1 ;
-(id)requestedSongString;
-(id)logFeaturedPeopleInMemory;
-(id)replaceEmojiWithPrintName:(id)arg1 ;
-(void)showTextViewWith:(id)arg1 ;
-(NSMutableDictionary *)projectMoodNamedTransitions;
-(void)setProjectMoodNamedTransitions:(NSMutableDictionary *)arg1 ;
-(id)prettyTransitionNameFromID:(id)arg1 fromBlueprint:(id)arg2 ;
-(void)resetMemoryToCleanState:(id)arg1 ;
-(void)saveDebugPanelForMemory:(id)arg1 ;
-(void)showMemoryTransitions;
-(void)showScoreLog;
-(void)showTextVersion;
-(id)makeEnhancedStringFromPlainOne:(id)arg1 ;
-(void)drawImageInContext:(id)arg1 andFrame:(CGRect)arg2 ;
-(void)drawSeperatingBorderInRect:(CGRect)arg1 withColor:(id)arg2 ;
-(unsigned long long)_getCurrentCountOfItems;
-(void)writeTextToImageContextWithSize:(CGSize)arg1 ;
-(void)writeTextToImageContextWithSize:(CGSize)arg1 andCell:(id)arg2 andLocation:(CGPoint)arg3 ;
-(id)createDebugPageWithInfoWithStartingIndex:(unsigned long long)arg1 andEndingIndex:(unsigned long long)arg2 ;
-(void)presentAirdropControllerWithDebugImageArray:(id)arg1 ;
-(MiroAutoEditController *)autoEditController;
-(void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3 ;
-(void)bringUpActions:(id)arg1 ;
-(void)bringUpSortOptions:(id)arg1 ;
-(void)presentModelImageViewWithImage:(id)arg1 ;
-(unsigned long long)numberRowsWithCurrentCount;
-(void)presentAirdropControllerWithDebugImage:(id)arg1 ;
-(void)setAlertView:(UIAlertView *)arg1 ;
-(MiroMovie *)miroMovie;
-(void)setMiroMovie:(MiroMovie *)arg1 ;
-(void)setProject:(Project *)arg1 ;
-(unsigned long long)currentSortType;
-(void)setCurrentSortType:(unsigned long long)arg1 ;
-(void)setAutoEditController:(MiroAutoEditController *)arg1 ;
-(BOOL)isSaveMode;
-(void)setIsSaveMode:(BOOL)arg1 ;
-(BOOL)textOnly;
-(void)setTextOnly:(BOOL)arg1 ;
-(BOOL)hackReuseCell;
-(void)setHackReuseCell:(BOOL)arg1 ;
-(void)setSortBarButton:(UIBarButtonItem *)arg1 ;
@end

