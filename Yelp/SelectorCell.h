//
//  SelectorCell.h
//  Yelp
//
//  Created by anjaneya kamat on 9/18/15.
//  Copyright (c) 2015 codepath. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SelectorCell;

@protocol SelectorCellDelegate <NSObject>

-(void)selectorCell:(SelectorCell *)cell didUpdateValue:(NSInteger)value;

@end

@interface SelectorCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UISegmentedControl *selector;

@property (nonatomic, assign) NSInteger value;
@property (nonatomic, weak) id<SelectorCellDelegate> delegate;

- (void)setValue:(NSInteger)value animated:(BOOL)animated;

@end
