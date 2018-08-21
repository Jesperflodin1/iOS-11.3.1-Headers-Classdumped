/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/TIKeyboardInputManagerBase.h>
#import <libobjc.A.dylib/TIRevisionHistoryDelegate.h>
#import <libobjc.A.dylib/TILanguageSelectionControllerDelegate.h>

@class NSMutableString, TIKeyboardLayout, TIKeyboardLayoutState, TIKeyboardInputManagerState, TIKeyboardFeatureSpecialization, NSCharacterSet, TILanguageSelectionController, TIEmojiCandidateGenerator, TIInputContextHistory, NSMutableArray, TIKeyboardState, TIKeyboardInputManagerConfig, TIRevisionHistory, TILRUDictionary, TIAutoshiftRegularExpressionLoader, TITextCheckerExemptions, TIKeyboardCandidate, NSArray, NSString;

@interface TIKeyboardInputManager : TIKeyboardInputManagerBase <TIRevisionHistoryDelegate, TILanguageSelectionControllerDelegate> {

	TIInputManager* m_impl;
	NSMutableString* m_composedText;
	unsigned long long m_initialSelectedIndex;
	TIKeyboardLayout* _keyLayout;
	TIKeyboardLayoutState* _layoutState;
	TIKeyboardInputManagerState* _currentState;
	TIKeyboardFeatureSpecialization* _keyboardFeatureSpecialization;
	NSCharacterSet* _allowPredictionCharacterSet;
	shared_ptr<KB::TypologyLogger>* m_typology_recorder;
	shared_ptr<KB::LanguageModel>* m_lightweight_language_model;
	TILanguageSelectionController* _languageSelectionController;
	TIEmojiCandidateGenerator* _emojiCandidateGenerator;
	TIInputContextHistory* _synchronizedInputContextHistory;
	NSMutableArray* _conversationTurns;
	BOOL _wordLearningEnabled;
	BOOL _isEditingWordPrefix;
	TIKeyboardState* _keyboardState;
	TIKeyboardInputManagerConfig* _config;
	/*^block*/id _candidateGenerationCompletionHandler;
	TIRevisionHistory* _revisionHistory;
	TILRUDictionary* _autocorrectionHistory;
	TILRUDictionary* _recentAutocorrections;
	TILRUDictionary* _recentPredictiveInputSelections;
	TILRUDictionary* _rejectedAutocorrections;
	TILRUDictionary* _autocorrectionForCurrentStem;
	TILRUDictionary* _rejectedDisplayedAutocorrectionsForCurrentStem;
	TILRUDictionary* _autocorrectionListsSuggestedForCurrentInput;
	TILRUDictionary* _autocorrectionListsForWordsInDocument;
	TIAutoshiftRegularExpressionLoader* _autoshiftRegexLoader;
	TITextCheckerExemptions* _textCheckerExemptions;
	long long _userInterfaceIdiom;
	unsigned long long _linguisticResourceStatus;
	long long _deleteKeyCount;
	TIKeyboardCandidate* _hitTestCorrectedInputMatchingCandidate;
	NSRange _candidateRange;

}

@property (nonatomic,retain) TIKeyboardLayout * keyLayout; 
@property (nonatomic,copy) id candidateGenerationCompletionHandler;                                          //@synthesize candidateGenerationCompletionHandler=_candidateGenerationCompletionHandler - In the implementation block
@property (nonatomic,readonly) TIRevisionHistory * revisionHistory;                                          //@synthesize revisionHistory=_revisionHistory - In the implementation block
@property (nonatomic,readonly) TILRUDictionary * autocorrectionHistory;                                      //@synthesize autocorrectionHistory=_autocorrectionHistory - In the implementation block
@property (nonatomic,readonly) TILRUDictionary * recentAutocorrections;                                      //@synthesize recentAutocorrections=_recentAutocorrections - In the implementation block
@property (nonatomic,readonly) TILRUDictionary * recentPredictiveInputSelections;                            //@synthesize recentPredictiveInputSelections=_recentPredictiveInputSelections - In the implementation block
@property (nonatomic,readonly) TILRUDictionary * rejectedAutocorrections;                                    //@synthesize rejectedAutocorrections=_rejectedAutocorrections - In the implementation block
@property (nonatomic,retain) TILRUDictionary * autocorrectionForCurrentStem;                                 //@synthesize autocorrectionForCurrentStem=_autocorrectionForCurrentStem - In the implementation block
@property (nonatomic,retain) TILRUDictionary * rejectedDisplayedAutocorrectionsForCurrentStem;               //@synthesize rejectedDisplayedAutocorrectionsForCurrentStem=_rejectedDisplayedAutocorrectionsForCurrentStem - In the implementation block
@property (nonatomic,readonly) TILRUDictionary * autocorrectionListsSuggestedForCurrentInput;                //@synthesize autocorrectionListsSuggestedForCurrentInput=_autocorrectionListsSuggestedForCurrentInput - In the implementation block
@property (nonatomic,readonly) TILRUDictionary * autocorrectionListsForWordsInDocument;                      //@synthesize autocorrectionListsForWordsInDocument=_autocorrectionListsForWordsInDocument - In the implementation block
@property (assign,getter=isWordLearningEnabled,nonatomic) BOOL wordLearningEnabled;                          //@synthesize wordLearningEnabled=_wordLearningEnabled - In the implementation block
@property (assign,nonatomic) BOOL isEditingWordPrefix;                                                       //@synthesize isEditingWordPrefix=_isEditingWordPrefix - In the implementation block
@property (nonatomic,retain) TIAutoshiftRegularExpressionLoader * autoshiftRegexLoader;                      //@synthesize autoshiftRegexLoader=_autoshiftRegexLoader - In the implementation block
@property (nonatomic,readonly) TITextCheckerExemptions * textCheckerExemptions;                              //@synthesize textCheckerExemptions=_textCheckerExemptions - In the implementation block
@property (nonatomic,readonly) NSCharacterSet * allowPredictionCharacterSet; 
@property (assign,nonatomic) long long userInterfaceIdiom;                                                   //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (assign,nonatomic) unsigned long long linguisticResourceStatus;                                    //@synthesize linguisticResourceStatus=_linguisticResourceStatus - In the implementation block
@property (assign,nonatomic) long long deleteKeyCount;                                                       //@synthesize deleteKeyCount=_deleteKeyCount - In the implementation block
@property (nonatomic,readonly) TIEmojiCandidateGenerator * emojiCandidateGenerator; 
@property (nonatomic,retain) TIKeyboardCandidate * hitTestCorrectedInputMatchingCandidate;                   //@synthesize hitTestCorrectedInputMatchingCandidate=_hitTestCorrectedInputMatchingCandidate - In the implementation block
@property (nonatomic,readonly) TIKeyboardInputManagerConfig * config;                                        //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) TILanguageSelectionController * languageSelectionController; 
@property (nonatomic,readonly) NSArray * languageModelAssets; 
@property (nonatomic,retain) TIKeyboardState * keyboardState;                                                //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,readonly) TIKeyboardInputManagerState * currentState; 
@property (nonatomic,readonly) TIKeyboardFeatureSpecialization * keyboardFeatureSpecialization; 
@property (assign,nonatomic) NSRange candidateRange;                                                         //@synthesize candidateRange=_candidateRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)removeAllDynamicDictionaries;
+(id)offlineLearningHandleForInputMode:(id)arg1 ;
+(int)shiftContextForShiftState:(int)arg1 autocapitalizationType:(unsigned long long)arg2 ;
+(id)recentsFilePathForIdentifier:(id)arg1 ;
+(id)keyboardUserDirectory;
+(id)dynamicDictionaryFilePathForInputMode:(id)arg1 ;
+(void)removeDynamicDictionaryForInputMode:(id)arg1 ;
+(id)userDictionaryWordKeyPairsFilePath;
+(void)clearRecentsFileForIdentifier:(id)arg1 ;
+(void)resetResponseKit;
-(long long)userInterfaceIdiom;
-(void)dealloc;
-(void)suspend;
-(TIKeyboardInputManagerState *)currentState;
-(void)setAutocapitalizationType:(unsigned long long)arg1 ;
-(id)candidates;
-(id)keyboardBehaviors;
-(TIKeyboardInputManagerConfig *)config;
-(void)resume;
-(id)candidateResultSet;
-(unsigned long long)initialSelectedIndex;
-(BOOL)supportsNumberKeySelection;
-(BOOL)usesCandidateSelection;
-(void)setInSplitKeyboardMode:(BOOL)arg1 ;
-(void)setUserInterfaceIdiom:(long long)arg1 ;
-(id)markedText;
-(TIKeyboardLayout *)keyLayout;
-(void)setKeyLayout:(TIKeyboardLayout *)arg1 ;
-(id)autocorrection;
-(void)clearInput;
-(void)setWordLearningEnabled:(BOOL)arg1 ;
-(id)searchStringForMarkedText;
-(BOOL)usesAutoDeleteWord;
-(BOOL)supportsSetPhraseBoundary;
-(id)inputString;
-(id)autocorrectionList;
-(BOOL)shouldExtendPriorWord;
-(void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 ;
-(void)setAutocapitalizationEnabled:(BOOL)arg1 ;
-(BOOL)nextInputWouldStartSentence;
-(BOOL)shouldSkipCandidateSelection;
-(unsigned long long)autoquoteType;
-(BOOL)suppressCompletionsForFieldEditor;
-(BOOL)suppliesCompletions;
-(BOOL)acceptInputString:(id)arg1 ;
-(BOOL)stringEndsWord:(id)arg1 ;
-(id)wordSeparator;
-(id)replacementForDoubleSpace;
-(unsigned long long)phraseBoundary;
-(unsigned)inputIndex;
-(id)shadowTyping;
-(unsigned)inputCount;
-(void)lastAcceptedCandidateCorrected;
-(void)setOriginalInput:(id)arg1 ;
-(void)candidateRejected:(id)arg1 ;
-(BOOL)commitsAcceptedCandidate;
-(id)defaultCandidate;
-(unsigned long long)initialCandidateBatchCount;
-(BOOL)suppressPlaceholderCandidate;
-(id)autocorrectionRecordForWord:(id)arg1 ;
-(void)setInHardwareKeyboardMode:(BOOL)arg1 ;
-(void)setKeyboardEventsLagging:(BOOL)arg1 ;
-(id)keyEventMap;
-(BOOL)ignoresDeadKeys;
-(BOOL)canHandleKeyHitTest;
-(long long)keyHitTest:(id)arg1 ;
-(id)initWithInputMode:(id)arg1 ;
-(id)nonstopPunctuationCharacters;
-(id)sentencePrefixingCharacters;
-(id)sentenceDelimitingCharacters;
-(id)sentenceTrailingCharacters;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 ;
-(void)storeLanguageModelDynamicDataIncludingCache;
-(id)inputsToReject;
-(BOOL)shouldUpdateLanguageModel;
-(BOOL)updateLanguageModelForKeyboardState;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(void)incrementUsageTrackingKeysForDeleteFromInput;
-(id)handleKeyboardInput:(id)arg1 ;
-(void)deleteFromInputWithContext:(id)arg1 ;
-(id)keyboardConfiguration;
-(BOOL)shouldUpdateDictionary;
-(void)loadDictionaries;
-(void)didUpdateInputModes:(id)arg1 ;
-(void)didUpdateInputModeProbabilities:(id)arg1 ;
-(id)resourceInputModes;
-(BOOL)supportsLearning;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(BOOL)doesComposeText;
-(id)dictionaryInputMode;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(id)wordCharacters;
-(id)terminatorsDeletingAutospace;
-(unsigned long long)maxPriorWordTokensAfterTrimming;
-(BOOL)acceptsCharacter:(unsigned)arg1 ;
-(BOOL)dictionaryUsesExternalEncoding;
-(const USetRef)precomposedCharacterSet;
-(id)dynamicResourcePath;
-(TILRUDictionary *)recentAutocorrections;
-(void)dynamicDictionariesRemoved:(id)arg1 ;
-(void)setAutoCorrects:(BOOL)arg1 ;
-(id)primaryInputMode;
-(void)incrementUsageTrackingKeyForAutocorrectionStatistic:(id)arg1 autocorrectionTypes:(unsigned)arg2 ;
-(void)incrementUsageTrackingKey:(id)arg1 ;
-(void)incrementLanguageModelCount:(id)arg1 tokenID:(TITokenID)arg2 context:(const TITokenID*)arg3 contextLength:(unsigned long long)arg4 saveToDifferentialPrivacy:(BOOL)arg5 ;
-(void)decrementLanguageModelCount:(id)arg1 tokenID:(TITokenID)arg2 context:(const TITokenID*)arg3 contextLength:(unsigned long long)arg4 ;
-(void)registerNegativeEvidence:(id)arg1 tokenID:(TITokenID)arg2 context:(const TITokenID*)arg3 contextLength:(unsigned long long)arg4 intendedTokenID:(TITokenID*)arg5 hint:(int)arg6 ;
-(TITokenID)findTokenIDForWord:(id)arg1 context:(const TITokenID*)arg2 contextLength:(unsigned long long)arg3 tokenLookupMode:(unsigned)arg4 surfaceFormPtr:(id*)arg5 hasCaseInsensitiveStaticVariant:(BOOL*)arg6 ;
-(TITokenID)findTokenIDForWord:(id)arg1 context:(const TITokenID*)arg2 contextLength:(unsigned long long)arg3 tokenLookupMode:(unsigned)arg4 ;
-(TITokenID)addWord:(id)arg1 context:(const TITokenID*)arg2 contextLength:(unsigned long long)arg3 surfaceFormPtr:(id*)arg4 ;
-(TIKeyboardFeatureSpecialization *)keyboardFeatureSpecialization;
-(id)newInputManagerState;
-(void)refreshInputManagerState;
-(void)scheduleLinguisticResourceUpdate;
-(BOOL)isLinguisticResourceUpdateScheduled;
-(void)updateDictionaryAndLanguageModel;
-(void)openCandidateGenerationContextWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)closeCandidateGenerationContextWithResults:(id)arg1 ;
-(id)usageTrackingKeyForStatistic:(id)arg1 ;
-(void)syncToLayoutState:(id)arg1 ;
-(void)syncMarkedTextForKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(void)syncInputStringToKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(void)willChangeToKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(BOOL)updateAdaptationContextToKeyboardState:(id)arg1 from:(id)arg2 ;
-(id)keyboardConfigurationLayoutTag;
-(id)keyboardConfigurationAccentKeyString;
-(BOOL)keyboardConfigurationAssertDefaultKeyPlane;
-(BOOL)shouldCommitInputString;
-(id)rawInputString;
-(id)inputStringFromDocumentState:(id)arg1 ;
-(id)contextBeforeWithDesiredLength:(unsigned long long)arg1 ;
-(void)setPhraseBoundaryIfNecessary;
-(void)setMarkedText;
-(id)sortMethodTitles;
-(id)sortMethodsGroupsForCandidates:(id)arg1 ;
-(id)sortMethodIndexes;
-(id)sortMethodsShowExtensionCandidates;
-(id)candidateResultSetFromCandidates:(id)arg1 ;
-(id)candidateResultSetFromCandidates:(id)arg1 proactiveTriggers:(id)arg2 ;
-(void)acceptCurrentCandidateWithContext:(id)arg1 ;
-(void)acceptCurrentCandidateIfSelectedWithContext:(id)arg1 ;
-(id)currentInputModeIdentifier;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(BOOL)documentState:(id)arg1 matchesDocumentState:(id)arg2 ;
-(void)syncToKeyboardState:(id)arg1 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(id)generateProactiveAutocompletionsWithDocumentState:(id)arg1 ;
-(void)trackProactiveMetrics:(id)arg1 keyboardState:(id)arg2 ;
-(id)generateAutofillFormWithKeyboardState:(id)arg1 ;
-(id)generateAutocorrectionsWithKeyboardState:(id)arg1 ;
-(id)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2 ;
-(long long)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(void)textAccepted:(id)arg1 fromPredictiveInputBar:(BOOL)arg2 ;
-(id)suffixOfDesiredString:(id)arg1 toAppendToInputString:(id)arg2 withInputIndex:(unsigned long long)arg3 afterDeletionCount:(unsigned long long*)arg4 ;
-(id)deletedSuffixOfInputContext:(id)arg1 whenDeletingFromInputString:(id)arg2 withInputIndex:(unsigned long long)arg3 deletionCount:(unsigned long long)arg4 ;
-(void)inputLocationChanged;
-(void)appendToInputContext:(id)arg1 ;
-(BOOL)removeSuffixOfInputContext:(id)arg1 ;
-(void)clearInputContext;
-(id)didAcceptCandidate:(id)arg1 ;
-(id)remainingInput;
-(BOOL)deletesComposedTextByComposedCharacterSequence;
-(void)updateComposedText;
-(unsigned)internalIndexToExternal:(unsigned)arg1 ;
-(unsigned)externalIndexToInternal:(unsigned)arg1 ;
-(id)dictionaryStringForExternalString:(id)arg1 ;
-(id)externalStringForDictionaryString:(id)arg1 ;
-(TIInputManager*)initImplementation;
-(SCD_Struct_TI6)lexiconInformation;
-(id)dictionaryPathForContentType:(id)arg1 inputMode:(id)arg2 ;
-(id)staticDictionaryPathForInputMode:(id)arg1 ;
-(id)pathToStaticDictionary;
-(id)deltaDictionaryPathForInputMode:(id)arg1 ;
-(id)pathToDeltaStaticDictionary;
-(id)phraseDictionaryPathForInputMode:(id)arg1 ;
-(id)pathToPhraseDictionary;
-(id)dynamicDictionaryPathForInputMode:(id)arg1 ;
-(id)languageModelAssetsForInputMode:(id)arg1 ;
-(NSArray *)languageModelAssets;
-(id)pathToDynamicDictionary;
-(void)loadFavoniusLanguageModel;
-(shared_ptr<KB::LanguageModel>*)loadedLightweightLanguageModel;
-(void)mobileAssetsChanged:(id)arg1 ;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned long long*)arg4 fromVariantKey:(BOOL)arg5 ;
-(BOOL)hasLegacyInputStem;
-(BOOL)hasLegacyInputString;
-(unsigned)simulateAutoshiftIfNecessaryForFlags:(unsigned)arg1 ;
-(NSRange)legacyInputRangeForTokenRange:(NSRange)arg1 ;
-(NSRange)acceptableRangeFromRange:(NSRange)arg1 inText:(id)arg2 withSelectionLocation:(unsigned long long)arg3 ;
-(NSRange)inputStringRangeFromRevisionHistory;
-(void)setInputStringFromDocumentState:(id)arg1 ;
-(BOOL)canComputeSentenceContextForInputStem:(id)arg1 ;
-(LanguageModelContext*)sentenceContextForInputStem:(id)arg1 ;
-(id)trimmedInputStem;
-(unsigned long long)countOfWordsIninputStem:(id)arg1 ;
-(unsigned long long)internalIndexOfInputStemSuffix:(id)arg1 ;
-(BOOL)canTrimInputAtIndex:(unsigned)arg1 ;
-(BOOL)canRetrocorrectInputAtIndex:(unsigned)arg1 ;
-(void)trimInput;
-(void)dropInputPrefix:(unsigned)arg1 ;
-(void)dropInput;
-(void)willDropInputStem;
-(void)didDropInputStem;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)clearIgnoredSuggestionForCurrentInput;
-(void)acceptInput;
-(id)inputContext;
-(id)internalInputContext;
-(void)updateInputContext;
-(void)setInputIndex:(unsigned)arg1 ;
-(id)inputStem;
-(id)currentWordStem;
-(void)displayedCandidateRejected;
-(BOOL)shouldAllowCorrectionOfAcceptedCandidate:(id)arg1 ;
-(BOOL)shouldSuppressTokenIDLookups;
-(BOOL)shouldSuppressLearning;
-(BOOL)shouldSuppressLanguageSelectionEvidence;
-(BOOL)shouldLearnWord:(id)arg1 ;
-(void)addItemToConversationHistoryWithText:(id)arg1 timestamp:(id)arg2 senderID:(id)arg3 ;
-(void)resetConversationHistory;
-(void)synchronizeConversationHistoryWithInputContextHistory:(id)arg1 ;
-(void)learnRecentMessageUserIsRespondingTo;
-(TITokenID)tokenIDForWordSeparator:(unsigned short)arg1 ;
-(BOOL)shouldExpectSentenceBoundaryAfterContext:(const TITokenID*)arg1 contextLength:(unsigned long long)arg2 ;
-(void)recordSuggestedAutocorrectionList:(id)arg1 ;
-(id)revisionListFromAutocorrectionList:(id)arg1 afterAcceptingCandidate:(id)arg2 ;
-(void)recordAcceptedAutocorrection:(id)arg1 fromPredictiveInputBar:(BOOL)arg2 ;
-(void)recordRejectedAutocorrectionForAcceptedText:(id)arg1 ;
-(void)updateForRevisitedString:(id)arg1 ;
-(BOOL)nextInputWouldStartSentenceAfterInput:(id)arg1 ;
-(BOOL)spaceAndNextInputWouldStartSentence;
-(BOOL)_canStartSentenceAfterString:(id)arg1 maxRecursionDepth:(unsigned long long)arg2 ;
-(BOOL)canStartSentenceAfterString:(id)arg1 ;
-(void)setAutoshiftFromInputContext;
-(void)checkAutocorrectionDictionaries;
-(unsigned long long)prefixLengthOfInput:(id)arg1 sharedWithCandidate:(const Candidate*)arg2 ;
-(unsigned long long)prefixLengthOfInput:(id)arg1 sharedWithCandidates:(const CandidateCollection*)arg2 ;
-(id)phraseCandidateCompletedByWord:(const String*)arg1 allowNoSuggest:(BOOL)arg2 forAutocorrection:(BOOL)arg3 ;
-(BOOL)isEditingExistingWord;
-(id)autocorrectionCandidateForInput:(id)arg1 withCandidate:(const Candidate*)arg2 ;
-(id)autocorrectionCandidateForInput:(id)arg1 withCandidate:(const Candidate*)arg2 insertingSpace:(BOOL)arg3 sharedPrefixLength:(unsigned long long)arg4 ;
-(BOOL)supportsShortcutConversion;
-(void)enumerateWordSuffixesOfString:(id)arg1 inRange:(NSRange)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)shouldSkipShortcutConversionForDocumentState:(id)arg1 ;
-(NSRange)shortcutSearchRangeForString:(id)arg1 ;
-(id)shortcutConversionForString:(id)arg1 stringStartsInMiddleOfWord:(BOOL)arg2 ;
-(id)shortcutConversionForInput:(id)arg1 andExistingString:(id)arg2 existingStringStartsInMiddleOfWord:(BOOL)arg3 ;
-(BOOL)usesRetrocorrection;
-(BOOL)suggestionBlacklistMatchesStrings:(id)arg1 ;
-(BOOL)shouldDropInputStem;
-(BOOL)shouldAllowContextTokenID:(TITokenID)arg1 ;
-(void)updateResponseModelForKeyboardState:(id)arg1 ;
-(id)_responseKitResponseCandidatesForString:(id)arg1 ;
-(id)rewriteMoneyAttributes:(id)arg1 ;
-(id)cannedResponseCandidatesForString:(id)arg1 ;
-(id)autocorrectionListForSelectedText;
-(void)reconcileCandidates:(CandidateCollection*)arg1 forTypedString:(String*)arg2 withPhraseCandidate:(Candidate*)arg3 replacing:(const String*)arg4 ;
-(BOOL)shouldGenerateSuggestionsForSelectedText;
-(BOOL)shouldAutocapitalizePredictionAfterSpace;
-(BOOL)shouldInsertSpaceBeforePredictions;
-(id)predictionCandidates:(unsigned long long)arg1 ;
-(id)indexesOfDuplicatesInCandidates:(id)arg1 ;
-(id)autocorrectionListForEmptyInputWithDesiredCandidateCount:(unsigned long long)arg1 ;
-(int)shiftContext;
-(id)completionCandidates:(unsigned long long)arg1 ;
-(id)extendedAutocorrection:(id)arg1 spanningInputsForCandidates:(id)arg2 emojis:(id)arg3 ;
-(NSCharacterSet *)allowPredictionCharacterSet;
-(BOOL)shouldGeneratePredictionsForCurrentContext;
-(id)typedStringForEmptyAutocorrection;
-(BOOL)doesSelectedTextGenerateEmojiCandidates;
-(BOOL)acceptsRange:(NSRange)arg1 inString:(id)arg2 ;
-(void)installTypologyTraceLogger;
-(TILanguageSelectionController *)languageSelectionController;
-(TIEmojiCandidateGenerator *)emojiCandidateGenerator;
-(TIKeyboardState *)keyboardState;
-(BOOL)isWordLearningEnabled;
-(NSRange)candidateRange;
-(void)setCandidateRange:(NSRange)arg1 ;
-(id)candidateGenerationCompletionHandler;
-(void)setCandidateGenerationCompletionHandler:(id)arg1 ;
-(TIRevisionHistory *)revisionHistory;
-(TILRUDictionary *)autocorrectionHistory;
-(TILRUDictionary *)recentPredictiveInputSelections;
-(TILRUDictionary *)rejectedAutocorrections;
-(TILRUDictionary *)autocorrectionForCurrentStem;
-(void)setAutocorrectionForCurrentStem:(TILRUDictionary *)arg1 ;
-(TILRUDictionary *)rejectedDisplayedAutocorrectionsForCurrentStem;
-(void)setRejectedDisplayedAutocorrectionsForCurrentStem:(TILRUDictionary *)arg1 ;
-(TILRUDictionary *)autocorrectionListsSuggestedForCurrentInput;
-(TILRUDictionary *)autocorrectionListsForWordsInDocument;
-(BOOL)isEditingWordPrefix;
-(void)setIsEditingWordPrefix:(BOOL)arg1 ;
-(TIAutoshiftRegularExpressionLoader *)autoshiftRegexLoader;
-(void)setAutoshiftRegexLoader:(TIAutoshiftRegularExpressionLoader *)arg1 ;
-(TITextCheckerExemptions *)textCheckerExemptions;
-(unsigned long long)linguisticResourceStatus;
-(void)setLinguisticResourceStatus:(unsigned long long)arg1 ;
-(long long)deleteKeyCount;
-(void)setDeleteKeyCount:(long long)arg1 ;
-(TIKeyboardCandidate *)hitTestCorrectedInputMatchingCandidate;
-(void)setHitTestCorrectedInputMatchingCandidate:(TIKeyboardCandidate *)arg1 ;
-(id)terminatorsPrecedingAutospace;
-(void)setPhraseBoundary:(unsigned long long)arg1 ;
-(void)setLayoutUsesTwoHands:(BOOL)arg1 ;
-(void)registerKeyArea:(CGRect)arg1 keyCode:(short)arg2 keyString:(const char*)arg3 ;
-(void)clearKeyAreas;
-(id)candidatesForString:(id)arg1 ;
-(id)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg1 withAdditionalPredictions:(id)arg2 withInput:(id)arg3 ;
-(id)autocorrectionListWithCandidateCount:(unsigned long long)arg1 ;
-(id)shortcutConversionForDocumentState:(id)arg1 ;
-(BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1 ;
-(id)titleForSortingMethod:(id)arg1 ;
-(id)sortingMethods;
-(id)indexTitlesForGroupTitles:(id)arg1 sortingMethod:(id)arg2 ;
-(id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 ;
-(void)setLearnsCorrection:(BOOL)arg1 ;
-(id)shortcutCompletionsForDocumentState:(id)arg1 ;
-(id)terminatorsPreventingAutocorrection;
-(BOOL)isHardwareKeyboardAutocorrectionEnabled;
-(void)transferErrorCorrectionFlagsToInputCandidate:(Candidate*)arg1 ;
-(void)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)inHardwareKeyboardMode;
-(void)clearDynamicDictionary;
-(void)releaseDynamicLanguageModel;
-(unsigned long long)maximumShortcutLengthAllowed;
-(void)addSynthesizedTouchToInput:(id)arg1 ;
-(BOOL)enablesProactiveQuickType;
-(void)logToTypologyRecorderWithString:(id)arg1 ;
-(unsigned long long)userFrequencyOfWord:(id)arg1 lexiconID:(unsigned)arg2 ;
-(unsigned long long)userFrequencyOfWord:(id)arg1 ;
-(id)humanReadableTrace;
-(void)clearHumanReadableTrace;
-(BOOL)isTypologyEnabled;
-(id)configurationPropertyList;
-(BOOL)dictionaryContainsWord:(id)arg1 ;
-(RefPtr<KB::DictionaryContainer>*)getDictionary;
-(void)setInput:(id)arg1 ;
-(id)initWithConfig:(id)arg1 ;
@end

