/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFMessageCriterionConverterDelegate;
@interface MFMessageCriterionConverter : NSObject {

	id<MFMessageCriterionConverterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MFMessageCriterionConverterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<MFMessageCriterionConverterDelegate>)delegate;
-(void)setDelegate:(id<MFMessageCriterionConverterDelegate>)arg1 ;
-(id)predicateFromMessageCriterion:(id)arg1 ;
-(unsigned long long)_proposedPredicateOperatorType:(unsigned long long)arg1 forKey:(id)arg2 ;
-(id)_predicateForKey:(id)arg1 value:(id)arg2 qualifier:(int)arg3 ;
-(id)_simplifiedCompoundPredicateOfType:(unsigned long long)arg1 forSubqueries:(id)arg2 ;
-(id)_defaultKeysForCriterionType:(long long)arg1 ;
-(id)_predicateKeysForCriterion:(long long)arg1 ;
-(id)_searchPredicateForCriterion:(id)arg1 ;
-(id)_orPredicateForAttributes:(id)arg1 matchingValue:(id)arg2 qualifier:(int)arg3 ;
-(long long)_defaultCriterionTypeForKey:(id)arg1 ;
-(long long)_criterionTypeForKey:(id)arg1 ;
-(long long)_criterionTypeFromExpression:(id)arg1 ;
-(id)messageCriterionFromPredicate:(id)arg1 ;
-(id)_messageCriterionForCompoundPredicate:(id)arg1 ;
-(id)_messageCriterionForComparisonPredicate:(id)arg1 ;
-(id)messageCriterionFromPredicateFormatString:(id)arg1 ;
@end

