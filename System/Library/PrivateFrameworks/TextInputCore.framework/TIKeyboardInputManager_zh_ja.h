/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/TIKeyboardInputManager.h>

@class NSMutableArray, NSArray, NSString, TIWordSearch, TIWordSearchCandidateResultSet, NSMutableDictionary, NSCharacterSet;

@interface TIKeyboardInputManager_zh_ja : TIKeyboardInputManager {

	BOOL _hasCommittedPartialCandidate;
	BOOL _hasBackspacedIntoInputString;
	int _lastCommittedCandidateType;
	NSMutableArray* _touchDataArray;
	NSArray* _clearedGeometryDataArray;
	NSArray* _clearedTouchDataArray;
	NSString* _currentClientIdentifier;
	NSString* _currentRecipientIdentifier;
	TIWordSearch* _wordSearch;
	TIWordSearchCandidateResultSet* _wordSearchCandidateResultSet;
	NSMutableArray* _geometryDataArray;
	NSMutableDictionary* _touchDownEvents;
	NSMutableDictionary* _touchUpEvents;

}

@property (nonatomic,retain) NSArray * clearedGeometryDataArray;                                         //@synthesize clearedGeometryDataArray=_clearedGeometryDataArray - In the implementation block
@property (nonatomic,retain) NSArray * clearedTouchDataArray;                                            //@synthesize clearedTouchDataArray=_clearedTouchDataArray - In the implementation block
@property (nonatomic,copy) NSString * currentClientIdentifier;                                           //@synthesize currentClientIdentifier=_currentClientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * currentRecipientIdentifier;                                        //@synthesize currentRecipientIdentifier=_currentRecipientIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasCommittedPartialCandidate;                                          //@synthesize hasCommittedPartialCandidate=_hasCommittedPartialCandidate - In the implementation block
@property (assign,nonatomic) BOOL hasBackspacedIntoInputString;                                          //@synthesize hasBackspacedIntoInputString=_hasBackspacedIntoInputString - In the implementation block
@property (assign,nonatomic) int lastCommittedCandidateType;                                             //@synthesize lastCommittedCandidateType=_lastCommittedCandidateType - In the implementation block
@property (nonatomic,readonly) TIWordSearch * wordSearch;                                                //@synthesize wordSearch=_wordSearch - In the implementation block
@property (nonatomic,readonly) MecabraRef mecabra; 
@property (nonatomic,retain) TIWordSearchCandidateResultSet * wordSearchCandidateResultSet;              //@synthesize wordSearchCandidateResultSet=_wordSearchCandidateResultSet - In the implementation block
@property (nonatomic,readonly) BOOL supportsPerRecipientLearning; 
@property (nonatomic,readonly) NSMutableArray * geometryDataArray;                                       //@synthesize geometryDataArray=_geometryDataArray - In the implementation block
@property (nonatomic,readonly) NSCharacterSet * validCharacterSetForAutocorrection; 
@property (nonatomic,readonly) NSMutableDictionary * touchDownEvents;                                    //@synthesize touchDownEvents=_touchDownEvents - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * touchUpEvents;                                      //@synthesize touchUpEvents=_touchUpEvents - In the implementation block
@property (nonatomic,readonly) NSMutableArray * touchDataArray;                                          //@synthesize touchDataArray=_touchDataArray - In the implementation block
+(id)initializedClients;
+(id)dummyTouchData;
+(id)dummyGeometryData;
+(id)offlineLearningHandleForInputMode:(id)arg1 ;
+(Class)wordSearchClass;
-(void)dealloc;
-(void)suspend;
-(void)resume;
-(void)clearInput;
-(unsigned long long)autoquoteType;
-(id)wordSeparator;
-(long long)keyHitTest:(id)arg1 ;
-(MecabraRef)mecabra;
-(NSMutableArray *)touchDataArray;
-(id)geometryModelData;
-(NSRange)analysisStringRange;
-(NSCharacterSet *)validCharacterSetForAutocorrection;
-(void)saveGeometryForInput:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)restoreGeometryForInput:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)padGeometryForInput:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)savePartialGeometryData;
-(id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 ;
-(BOOL)needsTouchEvents;
-(id)touchDataForPathIndex:(long long)arg1 ;
-(void)saveTouchDataForEvent:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)logInputString;
-(void)logDocumentContext;
-(void)logAllCandidates;
-(void)logCommittedCandidate:(id)arg1 partial:(BOOL)arg2 ;
-(void)storeLanguageModelDynamicDataIncludingCache;
-(void)insertDummyGeometryDataAtIndex:(unsigned long long)arg1 ;
-(void)insertDummyTouchDataAtIndex:(unsigned long long)arg1 ;
-(id)inputsToReject;
-(void)handlePerformBackgroundMaintenanceNotification;
-(id)adaptationContextReadingForReanalysisString:(id)arg1 fromRecentlyCommittedCandidates:(id)arg2 ;
-(BOOL)shouldUpdateLanguageModel;
-(BOOL)updateLanguageModelForKeyboardState;
-(BOOL)supportsPerRecipientLearning;
-(void)setLanguageModelAdaptationContext;
-(int)mecabraTextContentTypeFromTITextContentType:(id)arg1 ;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(void)updateUsageStatisticsForCandidate:(id)arg1 isPartial:(BOOL)arg2 ;
-(void)incrementUsageTrackingKeysForDeleteFromInput;
-(id)handleKeyboardInput:(id)arg1 ;
-(void)updateDocumentContext;
-(void)deleteFromInputWithContext:(id)arg1 ;
-(id)candidateResultSetFromWordSearchCandidateResultSet:(id)arg1 ;
-(void*)mecabraCandidateRefFromCandidate:(id)arg1 ;
-(void)addProactiveTriggers:(id)arg1 ;
-(void)updateProactiveCandidatesForCandidateResultSet:(id)arg1 withInput:(id)arg2 ;
-(NSArray *)clearedGeometryDataArray;
-(void)setClearedGeometryDataArray:(NSArray *)arg1 ;
-(NSArray *)clearedTouchDataArray;
-(void)setClearedTouchDataArray:(NSArray *)arg1 ;
-(NSString *)currentClientIdentifier;
-(void)setCurrentClientIdentifier:(NSString *)arg1 ;
-(NSString *)currentRecipientIdentifier;
-(void)setCurrentRecipientIdentifier:(NSString *)arg1 ;
-(BOOL)hasCommittedPartialCandidate;
-(void)setHasCommittedPartialCandidate:(BOOL)arg1 ;
-(BOOL)hasBackspacedIntoInputString;
-(void)setHasBackspacedIntoInputString:(BOOL)arg1 ;
-(int)lastCommittedCandidateType;
-(void)setLastCommittedCandidateType:(int)arg1 ;
-(TIWordSearch *)wordSearch;
-(TIWordSearchCandidateResultSet *)wordSearchCandidateResultSet;
-(void)setWordSearchCandidateResultSet:(TIWordSearchCandidateResultSet *)arg1 ;
-(NSMutableArray *)geometryDataArray;
-(NSMutableDictionary *)touchDownEvents;
-(NSMutableDictionary *)touchUpEvents;
-(id)initWithConfig:(id)arg1 ;
@end

