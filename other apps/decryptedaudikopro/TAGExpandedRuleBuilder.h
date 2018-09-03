//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TAGExpandedRuleBuilder : NSObject
{
    NSMutableArray *_positivePredicates;
    NSMutableArray *_negativePredicates;
    NSMutableArray *_addTags;
    NSMutableArray *_removeTags;
    NSMutableArray *_addMacros;
    NSMutableArray *_removeMacros;
}

@property(retain, nonatomic) NSMutableArray *removeMacros; // @synthesize removeMacros=_removeMacros;
@property(retain, nonatomic) NSMutableArray *addMacros; // @synthesize addMacros=_addMacros;
@property(retain, nonatomic) NSMutableArray *removeTags; // @synthesize removeTags=_removeTags;
@property(retain, nonatomic) NSMutableArray *addTags; // @synthesize addTags=_addTags;
@property(retain, nonatomic) NSMutableArray *negativePredicates; // @synthesize negativePredicates=_negativePredicates;
@property(retain, nonatomic) NSMutableArray *positivePredicates; // @synthesize positivePredicates=_positivePredicates;
- (void).cxx_destruct;
- (id)build;
- (void)addRemoveMacro:(id)arg1;
- (void)addAddMacro:(id)arg1;
- (void)addRemoveTag:(id)arg1;
- (void)addAddTag:(id)arg1;
- (void)addNegativePredicate:(id)arg1;
- (void)addPositivePredicate:(id)arg1;
- (id)init;

@end

