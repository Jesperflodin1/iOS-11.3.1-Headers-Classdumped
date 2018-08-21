/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSISVariableDelegate.h>

@protocol NSObservable, NSISEngineDelegate;
@class NSMapTable, NSISVariable, NSMutableArray, NSHashTable, NSObject, _NSISVariableObservable, NSMutableSet, NSMutableDictionary, NSThread, NSString;

@interface NSISEngine : NSObject <NSISVariableDelegate> {

	NSMapTable* _rows;
	NSMapTable* _rowsCrossIndex;
	NSISVariable* _headForObjectiveRow;
	NSMutableArray* _variablesWithValueRestrictionViolations;
	NSMutableArray* _pendingRemovals;
	NSHashTable* _pendingMarkerDelegates;
	NSObject*<NSObservable> _variableChangeTransactionSignal;
	NSMapTable* _variableObservables;
	_NSISVariableObservable* _dirtyObservables;
	id<NSISEngineDelegate> _delegate;
	NSMapTable* _brokenConstraintPositiveErrors;
	NSMapTable* _brokenConstraintNegativeErrors;
	NSMutableSet* _variablesWithIntegralizationViolations;
	CFDictionaryRef _integralizationAdjustmentsForConstraintMarkers;
	/*^block*/id _unsatisfiabilityHandler;
	unsigned long long _pivotCount;
	unsigned long long _variableChangeCount;
	CGSize _engineScalingCoefficients;
	NSMutableDictionary* _recordedOperations;
	NSThread* _allowedBGThread;
	int _automaticOptimizationDisabledCount;
	int _engineDelegateCallsDisabledCount;
	int _variableDelegateCallsDisabledCount;
	unsigned _totalChangeCount;
	unsigned _changeCountAtLastOptimization;
	BOOL _lastOptimizationInvolvedIntegralization;
	BOOL _shouldIntegralize;
	BOOL _revertsAfterUnsatisfiabilityHandler;
	BOOL _accumulatingRemovals;
	BOOL _engineNeedsOptimization;
	BOOL _allowUnoptimizedReads;
	BOOL _optimizationInProgress;
	BOOL _accessedFromMainThread;
	BOOL _engineNeedsRebuildFromConstraints;
	BOOL _changeNotificationsDirty;

}

@property (retain) NSMapTable * rows;                                                           //@synthesize rows=_rows - In the implementation block
@property (retain) NSMapTable * rowsCrossIndex;                                                 //@synthesize rowsCrossIndex=_rowsCrossIndex - In the implementation block
@property (retain) NSISVariable * headForObjectiveRow;                                          //@synthesize headForObjectiveRow=_headForObjectiveRow - In the implementation block
@property (retain) NSMutableArray * variablesWithValueRestrictionViolations;                    //@synthesize variablesWithValueRestrictionViolations=_variablesWithValueRestrictionViolations - In the implementation block
@property (retain) NSMutableSet * variablesWithIntegralizationViolations;                       //@synthesize variablesWithIntegralizationViolations=_variablesWithIntegralizationViolations - In the implementation block
@property (assign) CFDictionaryRef integralizationAdjustmentsForConstraintMarkers; 
@property (assign) id<NSISEngineDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL shouldIntegralize; 
@property (assign) BOOL revertsAfterUnsatisfiabilityHandler;                                    //@synthesize revertsAfterUnsatisfiabilityHandler=_revertsAfterUnsatisfiabilityHandler - In the implementation block
@property (readonly) unsigned long long variableChangeCount; 
@property (assign,nonatomic) CGSize engineScalingCoefficients;                                  //@synthesize engineScalingCoefficients=_engineScalingCoefficients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_dbg_anyEngineContainsVariable:(id)arg1 ;
+(void)setLogOnInvalidUseFromBGThread:(BOOL)arg1 ;
-(id)variableChangeTransactionSignal;
-(double)valueForExpression:(id)arg1 ;
-(unsigned long long)optimize;
-(unsigned long long)_optimizeWithoutRebuilding;
-(BOOL)tryToAddConstraintWithMarker:(id)arg1 expression:(id)arg2 integralizationAdjustment:(double)arg3 mutuallyExclusiveConstraints:(id*)arg4 ;
-(void)addVariableToBeOptimized:(id)arg1 priority:(double)arg2 ;
-(void)removeVariableToBeOptimized:(id)arg1 priority:(double)arg2 ;
-(void)changeVariableToBeOptimized:(id)arg1 fromPriority:(double)arg2 toPriority:(double)arg3 ;
-(void)removeConstraintWithMarker:(id)arg1 ;
-(void)constraintDidChangeSuchThatMarker:(id)arg1 shouldBeReplacedByMarkerPlusDelta:(double)arg2 ;
-(BOOL)tryToChangeConstraintSuchThatMarker:(id)arg1 isReplacedByMarkerPlusDelta:(double)arg2 undoHandler:(/*^block*/id)arg3 ;
-(void)verifyInternalIntegrity;
-(id)_brokenConstraintPositiveErrors;
-(id)_brokenConstraintPositiveErrorsIfAvailable;
-(id)_brokenConstraintNegativeErrors;
-(id)_brokenConstraintNegativeErrorsIfAvailable;
-(id)markerForBrokenConstraintWithPositiveErrorVar:(id)arg1 ;
-(id)markerForBrokenConstraintWithNegativeErrorVar:(id)arg1 ;
-(void)addVariable:(id)arg1 coefficient:(double)arg2 toRowWithHead:(id)arg3 body:(id)arg4 ;
-(void)addVariable:(id)arg1 priority:(double)arg2 times:(double)arg3 toObjectiveRowWithHead:(id)arg4 body:(id)arg5 ;
-(void)replaceMarker:(id)arg1 withMarkerPlusCoefficient:(double)arg2 timesVariable:(id)arg3 ;
-(void)setPositiveErrorVar:(id)arg1 forBrokenConstraintWithMarker:(id)arg2 ;
-(void)setNegativeErrorVar:(id)arg1 forBrokenConstraintWithMarker:(id)arg2 ;
-(id)fallbackMarkerForConstraintToBreakInRowWithHead:(id)arg1 body:(id)arg2 ;
-(id)errorVariableIntroducedByBreakingConstraintWithMarker:(id)arg1 errorIsPositive:(BOOL)arg2 ;
-(id)handleUnsatisfiableRowWithHead:(id)arg1 body:(id)arg2 usingInfeasibilityHandlingBehavior:(long long)arg3 mutuallyExclusiveConstraints:(id*)arg4 ;
-(double)integralizationAdjustmentForMarker:(id)arg1 ;
-(id)variableToWorkOnAmongVariablesWithIntegralizationViolationsIgnoringLostCauses:(id)arg1 varsAlreadyAdjusted:(id)arg2 ;
-(double)valueForVariableWithoutIntegralizationAdjustments:(id)arg1 ;
-(void)setIntegralizationAdjustment:(double)arg1 forMarker:(id)arg2 ;
-(void)withoutOptimizingAtEndRunBlockWithAutomaticOptimizationDisabled:(/*^block*/id)arg1 ;
-(BOOL)_variableIsAbsentExceptForObjectiveRow:(id)arg1 ;
-(id)chooseHeadForRowBody:(id)arg1 outNewToEngine:(BOOL*)arg2 ;
-(void)removeBodyVarFromAllRows:(id)arg1 ;
-(void)setRowsCrossIndex:(NSMapTable *)arg1 ;
-(void)setHeadForObjectiveRow:(NSISVariable *)arg1 ;
-(void)setVariablesWithValueRestrictionViolations:(NSMutableArray *)arg1 ;
-(void)setVariablesWithIntegralizationViolations:(NSMutableSet *)arg1 ;
-(void)setIntegralizationAdjustmentsForConstraintMarkers:(CFDictionaryRef)arg1 ;
-(void)rawSetRowWithHead:(id)arg1 body:(id)arg2 ;
-(void)_flushPendingRemovals;
-(void)rebuildFromConstraints;
-(id)fixUpValueRestrictionViolationsWithInfeasibilityHandlingBehavior:(long long)arg1 ;
-(void)fixupIntegralizationViolations;
-(BOOL)_optimizeIfNotDisabled;
-(void)withBehaviors:(unsigned long long)arg1 performModifications:(/*^block*/id)arg2 ;
-(void)enumerateRows:(/*^block*/id)arg1 ;
-(void)enumerateRowsCrossIndex:(/*^block*/id)arg1 ;
-(id)createExpressionBySubstitutingForRowHeadVariablesInExpression:(id)arg1 ;
-(BOOL)tryAddingDirectly:(id)arg1 ;
-(BOOL)tryUsingArtificialVariableToAddConstraintWithMarker:(id)arg1 rowBody:(id)arg2 usingInfeasibilityHandlingBehavior:(long long)arg3 mutuallyExclusiveConstraints:(id*)arg4 ;
-(void)addExpression:(id)arg1 priority:(double)arg2 times:(double)arg3 toObjectiveRowWithHead:(id)arg4 body:(id)arg5 ;
-(id)outgoingRowHeadForRemovingConstraintWithMarker:(id)arg1 ;
-(id)positiveErrorVarForBrokenConstraintWithMarker:(id)arg1 ;
-(id)negativeErrorVarForBrokenConstraintWithMarker:(id)arg1 ;
-(void)_coreReplaceMarker:(id)arg1 withMarkerPlusDelta:(double)arg2 ;
-(id)tryToOptimizeReturningMutuallyExclusiveConstraints;
-(void)_dirtyListRemoveObservable:(id)arg1 ;
-(void)enumerateOriginalConstraints:(/*^block*/id)arg1 ;
-(BOOL)bodyVarIsAmbiguous:(id)arg1 withPivotOfOutgoingRowHead:(id*)arg2 ;
-(BOOL)incoming:(id*)arg1 andOutgoing:(id*)arg2 rowHeadsThatMakeValueAmbiguousForVariable:(id)arg3 ;
-(CFDictionaryRef)integralizationAdjustmentsForConstraintMarkers;
-(id)allRowHeads;
-(void)rawRemoveRowWithHead:(id)arg1 ;
-(void)addExpression:(id)arg1 times:(double)arg2 toRowWithHead:(id)arg3 body:(id)arg4 ;
-(BOOL)_dirtyListContainsObservable:(id)arg1 ;
-(void)_dirtyListPrependObservable:(id)arg1 ;
-(BOOL)isTrackingVariableChanges;
-(void)performPendingChangeNotificationsForItem:(id)arg1 ;
-(void)performModifications:(/*^block*/id)arg1 withUnsatisfiableConstraintsHandler:(/*^block*/id)arg2 ;
-(unsigned long long)numberOfConstraintsEligibleForAdjustmentToIntegralizeVariable:(id)arg1 ignoringConstraintsWithMarkers:(id)arg2 ;
-(void)beginRecording;
-(id)recordedCommandsData;
-(unsigned long long)replayCommandsData:(id)arg1 verifyingIntegrity:(BOOL)arg2 ;
-(BOOL)shouldIntegralize;
-(void)withDelegateCallsDisabled:(/*^block*/id)arg1 ;
-(BOOL)hasValueForPossiblyDeallocatedVariable:(id)arg1 ;
-(BOOL)hasValue:(double*)arg1 forExpression:(id)arg2 ;
-(BOOL)containsVariable:(id)arg1 ;
-(BOOL)containsConstraintWithMarker:(id)arg1 ;
-(BOOL)hasObservableForVariable:(id)arg1 ;
-(unsigned long long)pivotCount;
-(unsigned long long)variableChangeCount;
-(NSMapTable *)rowsCrossIndex;
-(NSISVariable *)headForObjectiveRow;
-(NSMutableArray *)variablesWithValueRestrictionViolations;
-(NSMutableSet *)variablesWithIntegralizationViolations;
-(BOOL)revertsAfterUnsatisfiabilityHandler;
-(void)setRevertsAfterUnsatisfiabilityHandler:(BOOL)arg1 ;
-(BOOL)_disambiguateFrame:(CGRect*)arg1 forAmbiguousItem:(id)arg2 withOldFrame:(CGRect)arg3 ;
-(id)init;
-(id<NSISEngineDelegate>)delegate;
-(void)setDelegate:(id<NSISEngineDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)removeObservableForVariable:(id)arg1 ;
-(id)observableForVariable:(id)arg1 ;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(id)constraints;
-(void)performPendingChangeNotifications;
-(void)setEngineScalingCoefficients:(CGSize)arg1 ;
-(void)withAutomaticOptimizationDisabled:(/*^block*/id)arg1 ;
-(double)valueForVariable:(id)arg1 ;
-(BOOL)valueOfVariableIsAmbiguous:(id)arg1 ;
-(BOOL)hasValue:(double*)arg1 forVariable:(id)arg2 ;
-(NSMapTable *)rows;
-(id)constraintsAffectingValueOfVariable:(id)arg1 ;
-(void)setRows:(NSMapTable *)arg1 ;
-(void)setShouldIntegralize:(BOOL)arg1 ;
-(id)candidateRedundantConstraints;
-(CGSize)engineScalingCoefficients;
-(BOOL)exerciseAmbiguityInVariable:(id)arg1 ;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(BOOL)nsis_shouldIntegralizeVariable:(id)arg1 ;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
@end

