//
//  BNRItemStore.h
//  Homepwner
//
//  Created by Anello, Benjamin J on 5/28/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BNRItem;

@interface BNRItemStore : NSObject

// Notice that this is a class method and prefixed with a + instead of a -
+ (instancetype)sharedStore;

@property (nonatomic, readonly, copy) NSArray *allItems;

- (BNRItem *)createItem;
- (void)removeItem:(BNRItem *)item;

@end
