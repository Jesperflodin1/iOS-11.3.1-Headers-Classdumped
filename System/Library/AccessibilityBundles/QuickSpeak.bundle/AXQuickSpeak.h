/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 11:59:07 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/AccessibilityBundles/QuickSpeak.bundle/QuickSpeak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickSpeak/QuickSpeak-Structs.h>
#import <libobjc.A.dylib/AXOratorDelegate.h>

@class AXOrator, UITextRange, QSSelectionHighlightView, NSArray, AXDispatchTimer, NSString, AXLanguageTaggedContent;

@interface AXQuickSpeak : NSObject <AXOratorDelegate> {

	CGPoint _lastQuickSpeakOffset;
	AXOrator* _orator;
	unsigned long long _lastWholeCharacterLocation;
	unsigned long long _lastUnicharLocation;
	UITextRange* _currentSentenceRange;
	BOOL _cachedIdleTimerPref;
	BOOL _paused;
	BOOL _hasTextBalloonView;
	UITextRange* speakingSentenceRange;
	id _quickSpeakInitiator;
	QSSelectionHighlightView* _highlightView;
	NSArray* _hiddenTextSelectionViews;
	QSSelectionHighlightView* _sentenceHighlightView;
	NSArray* _hiddenTextSelectionDelegates;
	AXDispatchTimer* _highlightViewDispatcher;
	id _contentOwner;

}

@property (nonatomic,readonly) AXOrator * orator; 
@property (assign,nonatomic) BOOL cachedIdleTimerPref;                                      //@synthesize cachedIdleTimerPref=_cachedIdleTimerPref - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                   //@synthesize paused=_paused - In the implementation block
@property (nonatomic,retain) id quickSpeakInitiator;                                        //@synthesize quickSpeakInitiator=_quickSpeakInitiator - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * highlightViewDispatcher;                     //@synthesize highlightViewDispatcher=_highlightViewDispatcher - In the implementation block
@property (nonatomic,retain) NSArray * hiddenTextSelectionViews;                            //@synthesize hiddenTextSelectionViews=_hiddenTextSelectionViews - In the implementation block
@property (nonatomic,retain) NSArray * hiddenTextSelectionViewDelegates;                    //@synthesize hiddenTextSelectionDelegates=_hiddenTextSelectionDelegates - In the implementation block
@property (nonatomic,copy) NSString * content; 
@property (nonatomic,retain) id contentOwner;                                               //@synthesize contentOwner=_contentOwner - In the implementation block
@property (nonatomic,retain) UITextRange * speakingSentenceRange; 
@property (assign,nonatomic) BOOL spellOutContent; 
@property (nonatomic,readonly) AXLanguageTaggedContent * selectedContent; 
@property (assign,nonatomic) BOOL hasTextBalloonView;                                       //@synthesize hasTextBalloonView=_hasTextBalloonView - In the implementation block
@property (nonatomic,retain) QSSelectionHighlightView * highlightView;                      //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) QSSelectionHighlightView * sentenceHighlightView;              //@synthesize sentenceHighlightView=_sentenceHighlightView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)initialize;
+(BOOL)quickSpeakClassIsBlacklisted:(id)arg1 ;
+(BOOL)isQuickSpeakSelector:(SEL)arg1 ;
-(void)setContent:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)content;
-(void)setHighlightView:(QSSelectionHighlightView *)arg1 ;
-(QSSelectionHighlightView *)highlightView;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isPaused;
-(BOOL)isSpeaking;
-(AXLanguageTaggedContent *)selectedContent;
-(BOOL)spellOutContent;
-(void)oratorDidFinishSpeaking:(id)arg1 ;
-(void)oratorDidPauseSpeaking:(id)arg1 ;
-(void)oratorDidResumeSpeaking:(id)arg1 ;
-(void)oratorDidCancelSpeaking:(id)arg1 ;
-(void)orator:(id)arg1 willSpeakRange:(NSRange)arg2 ofContent:(id)arg3 ;
-(void)speakStatusWithLanguage:(id)arg1 rate:(id)arg2 ;
-(void)setSpellOutContent:(BOOL)arg1 ;
-(AXOrator *)orator;
-(void)_handleAppDidEnterBackground:(id)arg1 ;
-(void)_handleAppWillResignActive:(id)arg1 ;
-(void)_stopSpeakingQuickSpeak:(id)arg1 ;
-(QSSelectionHighlightView *)sentenceHighlightView;
-(void)stopAction:(id)arg1 ;
-(void)resumeAction:(id)arg1 ;
-(void)setQuickSpeakInitiator:(id)arg1 ;
-(id)quickSpeakInitiator;
-(void)setCachedIdleTimerPref:(BOOL)arg1 ;
-(void)_manipulateOtherTextViews:(BOOL)arg1 ;
-(void)setContentOwner:(id)arg1 ;
-(UITextRange *)speakingSentenceRange;
-(void)setSpeakingSentenceRange:(UITextRange *)arg1 ;
-(void)setSentenceHighlightView:(QSSelectionHighlightView *)arg1 ;
-(id)_textSelectionViews;
-(void)setHiddenTextSelectionViews:(NSArray *)arg1 ;
-(NSArray *)hiddenTextSelectionViews;
-(void)setHiddenTextSelectionViewDelegates:(NSArray *)arg1 ;
-(id)_viewsWithBlock:(/*^block*/id)arg1 ;
-(id)_quickSpeakInputInitiator;
-(void)_updateCalloutBar;
-(BOOL)cachedIdleTimerPref;
-(void)_cleanupTextSelectionViews;
-(id)contentOwner;
-(void)_unionRects:(id)arg1 withRect:(CGRect)arg2 ;
-(void)_quickSpeakTextRects:(id)arg1 withRange:(NSRange)arg2 string:(id)arg3 highlightRects:(id)arg4 sentenceRects:(id)arg5 singleTextRect:(CGRect*)arg6 ;
-(void)_quickSpeakUITextInputTextRects:(id)arg1 withRange:(NSRange)arg2 string:(id)arg3 highlightRects:(id)arg4 sentenceRects:(id)arg5 singleTextRect:(CGRect*)arg6 ;
-(void)_handleQuickSpeakHighlight:(id)arg1 sentenceRects:(id)arg2 textRect:(CGRect)arg3 initiator:(id)arg4 ;
-(NSRange)_updatedRangeForComposedCharacters:(NSRange)arg1 string:(id)arg2 lastKnownWholeCharacterLocation:(unsigned long long)arg3 lastKnownUnicharLocation:(unsigned long long)arg4 ;
-(NSRange)modifiedRange:(NSRange)arg1 withString:(id)arg2 ;
-(id)_rectsByUnionSamelineRects:(id)arg1 ;
-(id)_sentenceRects:(id)arg1 speakingRange:(id)arg2 ;
-(void)_scrollToTextRect:(CGRect)arg1 withScrollView:(id)arg2 ;
-(id)_sentenceHighlightOverlapHeightArray;
-(id)_sliceRects:(id)arg1 withSentenceRects:(id)arg2 wordRects:(id)arg3 ;
-(void)_handlePauseCallback;
-(AXDispatchTimer *)highlightViewDispatcher;
-(void)setHighlightViewDispatcher:(AXDispatchTimer *)arg1 ;
-(void)_willSpeakRange:(NSRange)arg1 string:(id)arg2 ;
-(void)speakAction:(id)arg1 withPreferredLanguage:(id)arg2 ;
-(void)pauseAction:(id)arg1 ;
-(BOOL)selectedContentIsSpeakable;
-(BOOL)selectedContentRequiresUserChoice;
-(NSArray *)hiddenTextSelectionViewDelegates;
-(BOOL)hasTextBalloonView;
-(void)setHasTextBalloonView:(BOOL)arg1 ;
@end

