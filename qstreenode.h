#ifndef QSTREENODE_H
#define QSTREENODE_H

class QSTreeNode
{
public:
    QSTreeNode();
    QSTreeNode(int value, int count);
    ~QSTreeNode();

    int count() const;
    void setCount(int count);

    int value() const;
    void setValue(int value);

    int sum() const;
    void setSum(int sum);

    int height() const;
    void setHeight(int height);

    QSTreeNode *left() const;
    void setLeft(QSTreeNode *left);

    QSTreeNode *right() const;
    void setRight(QSTreeNode *right);

    QSTreeNode *parent() const;
    void setParent(QSTreeNode *parent);

    // Update height and sum from child
    void update();

private:

    int m_value;
    int m_count;
    int m_sum;
    int m_height;
    QSTreeNode* m_left;
    QSTreeNode* m_right;
    QSTreeNode* m_parent;

};

#endif // QSTREENODE_H